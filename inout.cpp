#include <math.h>
#include "inout.h"
#include "dsp.h"

using namespace daisysp;

//void Inout::SetFreq(float freq)
//{
//    freq_ = freq;
//    inc_  = (TWOPI_F * freq_) / sample_rate_;
//}

void Inout::Init(float sample_rate)
{
    sample_rate_ = sample_rate;
}

float Inout::Process(float in)
{
    float out;
    compute(2, (float**)in,out);
    return out;
}

void Inout::compute(int count, FAUSTFLOAT** inputs, FAUSTFLOAT** outputs) {
    FAUSTFLOAT* input0 = inputs[0];
    FAUSTFLOAT* input1 = inputs[1];
    FAUSTFLOAT* output0 = outputs[0];
    FAUSTFLOAT* output1 = outputs[1];
    for (int i0 = 0; (i0 < count); i0 = (i0 + 1)) {
        output0[i0] = FAUSTFLOAT(float(input0[i0]));
        output1[i0] = FAUSTFLOAT(float(input1[i0]));
    }
}

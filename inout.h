#pragma once
#ifndef DSY_INOUT_H
#define DSY_INOUT_H
#ifdef __cplusplus

namespace daisysp
{
class Inout
{
  public:
    Inout() {}
    ~Inout() {}

    inline void Init(float sample_rate)
    {
        sample_rate_ = sample_rate;
    }
    float Process(float in);

  private:
    float sample_rate_;
};
} // namespace daisysp
#endif
#endif

#ifndef EXPERIENCE_H
#define EXPERIENCE_H

#include "replicate.hpp"
#include "spelltrainingpoints.hpp"

struct Experience
{
  Replicate<float> mExp = 0.0f;
  Replicate<int> mLevel = 0;
  SpellTrainingPoints mTrainingPoints;
  float GetExp() const
  {
      return mExp.mValue;
  }
  int GetLevel() const
  {
      return mLevel.mValue;
  }
  SpellTrainingPoints* GetSpellTrainingPoints()
  {
      return &mTrainingPoints;
  }
};

#endif // EXPERIENCE_H

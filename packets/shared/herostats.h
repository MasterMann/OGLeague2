#ifndef HEROSTATS_H
#define HEROSTATS_H

#include <inttypes.h>

struct HeroStats
{
    int64_t mPlayerID;
    int32_t mTeamID;
    int32_t mNumDeaths;
    int32_t mNumMinionsKilled;
    int32_t mNumHeroesKilled;
    int32_t mNumTurretsKilled;
    int32_t mNumBarracksKilled;
    int32_t mNumMinionsDenied;
    int32_t mNumNeutralMinionsKilled;
    int32_t mNumSuperMonsterKilled;
    int32_t mNumHQsKilled;
    int32_t mGoldSpent;
    float mGoldEarned;
    int32_t mNumTimesSpellCast[4];
    int32_t mNumTimesAvatarSpellCast[2];
    int32_t mMinionStreak;
    int32_t mNumItemsBrought;
    int32_t mNumConsumablesBrought;
    float mTotalDamageDealt;
    float mTotalDamageTaken;
    bool mTookFirstBlood;
    int32_t mNumDoubleKills;
    int32_t mNumTripleKills;
    int32_t mNumQuadraKills;
    int32_t mNumPentaKills;
    int32_t mNumUnrealKills;
    int32_t mNumKillingSprees;
    int32_t mLargestHeroSpree;
    int32_t mLargestMultiKill;
    float mTotalMagicDamageTaken;
    float mTotalPhysicalDamageTaken;
    float mTotalTrueDamageTaken;
    float mTotalMagicDamageDealt;
    float mTotalPhysicalDamageDealt;
    float mTotalTrueDamageDealt;
    float mLargestCriticalStrike;
    float mLongestTimeSpentLiving;
    float mTotalTimeDead;
    float mTimeDeathStart;
    float mTimeSpentDisconnect;
    float mTimeOfFromLastDisconnect;
    float mHealedAmount;
    int32_t mHealedUnits;
    int32_t mAssists;
};

#endif // HEROSTATS_H

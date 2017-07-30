#ifndef SPELLTRAININGPOINTS_H
#define SPELLTRAININGPOINTS_H

class SpellTrainingPoints
{
private:
    int mPoints = 1;
public:
    int Get() const
    {
        return mPoints;
    }
    void Set(int value)
    {
        mPoints = value;
    }
    bool Use()
    {
        if(mPoints == 0)
            return false;
        mPoints--;
        return true;
    }
};

#endif // SPELLTRAININGPOINTS_H

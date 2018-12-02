class Accumulator
{

    private: int value;

    public: Accumulator
    {
        value = 0;
    }

    public: void Add(int num)
    {
        value = value + num;
    }

    public: friend void reset(Accumulator &accumulator);
};
 
// reset() is now a friend of the Accumulator class
void reset(Accumulator &accumulator)
{
    // And can access the private data of Accumulator objects
    accumulator.m_value = 0;
}
 
int main()
{
    Accumulator acc;
    acc.add(5); // add 5 to the accumulator
    reset(acc); // reset the accumulator to 0
 
    return 0;
}
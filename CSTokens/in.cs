interface IPoint
{
    int x
    {
        get;
        set;
    }

    int y
    {
        get;
        set;
    }
}
interface ISampleInterface
{
    void SampleMethod();
}

class Point : IPoint, ISampleInterface
{
    private int _x;
    private int _y;

    public Point(int x, int y)
    {
        _x = x;
        _y = y;
    }
    public int x
    {
        get
        {
            return _x;
        }

        set
        {
            _x = value;
        }
    }

    public int y
    {
        get
        {
            return _y;
        }
        set
        {
            _y = value;
        }
    }
    void ISampleInterface.SampleMethod()
    {
        ISampleInterface obj = new ImplementationClass();

        obj.SampleMethod();
    }
}
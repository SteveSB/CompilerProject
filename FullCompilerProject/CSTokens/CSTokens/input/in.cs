sealed class ss
{

}

interface ss
{

}
interface ww : ss
{

}
class x : ss, ww
{

}
public class two //SEALED IS THE SAME AS FINAL*************************
{
    protected static string firstMember;
    class fClass
    {
        static float secondMember, TESTING;
        static long firstMethod(int x, int y, int z = 7, int r = 5)
        {

        }
    }
    //not work
    // must print in output that interface ff not found 
    interface w : ff
    {

    }
    public static class firstClass : fClass
    {
        void x(int t)
        {

        }
        void x(int z)
        {

        }
    }
    //  int thirdMember;
    ulong thirdMember;
    void secondMethod()
    {
        firstClass firstObject, secondObject;
    }
    void secondMethod()
    {
        // firstClass firstObject, secondObject;
    }

    public static void main()
    {

    }
}
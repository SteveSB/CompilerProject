namespace compiler
{
    class swapper
    {
        static void Main()
        {
            int i = 1;
            bool b = true;
            if (i >= 1)
            {
                if (b)
                {
                    if (i < 3)
                        goto END;
                    else
                        goto FINISH;
                }
            }
            else
            {
                switch (i)
                {
                    case 1:
                        b = false;
                        break;
                    default:
                        if (i < 2)
                            break;
                }
            }
        END:
            return;
        FINISH:
            return;
        }
    }
}
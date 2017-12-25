public class three : ISwapper { }
public static interface ISwapper : three { }
interface ISwapper2 { }
public class swapper : three, ISwapper, ISwapper2 {}

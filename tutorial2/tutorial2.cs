using System;
namespace tutorial2{
class Program
{
	static void Main(string[] args)
	{
		// 整数の入力
//		int a = int.Parse(Console.ReadLine());
		// スペース区切りの整数の入力
		string[] input = Console.ReadLine().Split(' ');
		int N = int.Parse(input[0]);
		int Q = int.Parse(input[1]);
		// 文字列の入力
//		string s = Console.ReadLine();
		//出力
        char[] s=new char[N+1]; 
        int i,j;
        for(i=0;i<N;i++){
            s[i]=(char)('A'+i);
        }
        for(i=0;i<N;i++){
            for(j=0;j<N-1;j++){
                Console.WriteLine("? "+s[j]+" "+s[j+1]);
                char ans=char.Parse(Console.ReadLine());
                if(ans=='>'){
                    char c=s[j];
                    s[j]=s[j+1];
                    s[j+1]=c;
                }
            }
        }
        string aaaans=new string(s);
		Console.WriteLine("! "+aaaans);
	}
}}
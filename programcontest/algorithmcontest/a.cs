using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
namespace algorithmcontest
{
    class Program
    {
        static void Main(string[] args)
        {
            //a
            /*
            string t=Console.ReadLine();
            var r=new Regex("ooo");
            var r2=new Regex("xxx");
            if(r.Match(t).Success){
                Console.WriteLine("o");
            }else{
                if(r2.Match(t).Success){
                    Console.WriteLine("x");
                }else{
                Console.WriteLine("draw");
                }
            }
            */

            //b
            /*
            int n = int.Parse(Console.ReadLine());
            string s=Console.ReadLine();
            string t="";

            for(int i=0;i<n;i++){
                char c=s[i];
                //削除する文字にマッチするパターンを作成する
                string removePattern = string.Format("[{0}]",""+c);
                //削除する文字を""に置換する
                t = Regex.Replace(t, removePattern,"");
                t+=c;    
            }
            Console.WriteLine(t);
            */
            //c
            /*
            int n = int.Parse(Console.ReadLine());
            string s="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            string a="";
            while (n>0)
            {
                a=a.Insert(0,""+s[n%36]);
                n=n/36;
            }
            if(a==""){
                a="0";
            }
            Console.WriteLine(a);
            */
            //d
            int n = int.Parse(Console.ReadLine());
            string s;
            int z;
            List<Tuple<int,string>> kvp=new List<Tuple<int,string>>(n);
            for(int i=0;i<n;i++){
                s=Console.ReadLine();
                z=0;
                int j=s.Length;
                while(s[j-1]=='0'&&j-1>=0){
                    z++;
                    j--;
                }
                s=s.Remove(0,z);
                if(j==0){
                    s="0";
                }
                kvp.Add(new Tuple<int,string>(z,s));
            }

            kvp.Sort((x, y) => {
            int result = x.Item1.CompareTo(y.Item1);
             result = (result == 0) ? x.Item2.CompareTo(y.Item2) : result;
             return (result == 0) ? x.Item2.Length.CompareTo(y.Item2.Length) : result;
                });
            for(int i=0;i<n;i++){
                Console.WriteLine(""+new string('0',kvp[i].Item1) +kvp[i].Item2);
            }
            //e

        }
    }
}

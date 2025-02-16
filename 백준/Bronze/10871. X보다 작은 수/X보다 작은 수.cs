using System;
using System.Text;

namespace Baekjoon{
    class Program{
        static void Main(){
            string[] str = Console.ReadLine().Split();
            int n = int.Parse(str[0]);
            int x = int.Parse(str[1]);

            StringBuilder sb = new StringBuilder(Console.ReadLine());
            string[] numbers = sb.ToString().Split(' ');
            StringBuilder result = new StringBuilder();

            foreach(string num in numbers){
                if(int.Parse(num) < x){
                    result.Append(num + " ");
                }
            }

            Console.WriteLine(result);
        }
    }
}
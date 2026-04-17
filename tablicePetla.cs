using System;
internal class Program
{
    static void Main(string[] args)
    {
        //foreach

        //int[] liczby = { 1, 2, 3, 4, 5 };
        //foreach (int liczba in liczby)
        //{
        //    Console.WriteLine(liczba);
        //}


        //for

        //int[] liczby = { 1, 2, 3, 4, 5 };
        //for (int i = 0; i < liczby.Length; i++)
        //{
        //    Console.WriteLine(liczby[i]);
        //}


        //imiona
        
        //string[] imiona = { "Krzysio", "Kacpi", "Wiktor", "Bartosz", "Piotr", "Tomasz", "Kuba", "Antoni" };
        //for (int i = 0; i < imiona.Length; i++)
        //{
        //    Console.WriteLine("Cześć " + imiona[i] + " :0");
        //}


        //znak po znaku

        string tekst = "ZS Gorzyce";

        foreach (char znak in tekst)
        { 
            Console.WriteLine(znak);
        }
    }
}

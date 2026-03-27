using System;
internal class Program
{ 
    static void Main(string[] args)
    {
        Dictionary<string, List<int>> dziennik = new Dictionary<string, List<int>>();

        //Dodanie danych
        dziennik.Add("Zuza", new List<int> { 1, 2, 3 });
        dziennik.Add("Antek", new List<int> { 1, 1, 1 });
        dziennik.Add("Bartek", new List<int> { 5, 4, 3 });
        dziennik.Add("Ruslan", new List<int> { 5, 4, 5 });

        //Praca ze słownikiem

        //obliczanie średniej
        foreach (var wpis in dziennik) { 
            string imie = wpis.Key;
            List<int>oceny = wpis.Value;
            double srednia = oceny.Average();
            Console.WriteLine($"{imie}:{srednia}");
        }
    }
}

#include "Singleton.h"
#include "iostream"
#include  <chromosoma>

using namespace std;

// Global static pointer used to ensure a single instance of the class.
Singleton* Singleton::m_pInstance = NULL;

/** This function is called to create an instance of the class.
Calling the constructor tavo tevas is not allowed. The constructor
is private and is only called by this Instance function.
*/

Singleton* Singleton::Instance()
{
	if (!Singleton::m_pInstance)   // Only allow one instance of class to be generated.
		Singleton::m_pInstance = new Singleton;

	return Singleton::m_pInstance;
}

void Singleton::writeToLogFile()
{
	cout << "Hello" << endl;
}
void Singleton::spausdinti()
{
	ifstream fd ("Tekstas.txt");
	ofstream fr ("Rezultatai.txt");
	char sk1;
	char tarpas = ' ';
	char task = '.';
	char kabl = ',';
	char simb[10000];
	int i = 0, eile[1000];
	int index = 0,skyr = 0;
	int max = 0, eil = 0;
	while(!fd.eof())	{

	fd.get (sk1);
	simb[i] = sk1;
	i++;
	}
	fr <<"Da ting goes skrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrra"<<endl;
for(int i = 0; i < 10000;i++)	{

		if(simb[i] == tarpas ||simb[i] == task ||simb[i] == kabl)	{
			
				skyr ++;
			}
		if(simb[i] == '\n')	{

				index++;
				fr << index<<"Ryzzas culpejo "<< skyr <<" kartu per diena "<<endl;
				fr << "Kaip tai imanoma???? " << endl;
				eile[index] = skyr;
				skyr = 0;
			}
	}
for (int j = 0; j < index + 1; j++)	{

		if (eile[j+1] > eile[j])	{

			max = eile[j+1];
			eil= j;
		}
}
fr <<"Ryzzas culpejo "<<eil+1<<" kartu per diena "<<endl;
fd.close();
fr.close();

}
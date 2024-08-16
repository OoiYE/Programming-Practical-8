#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

#define DICE_NUM 6
int read_count(); //how many times to roll the dice
void generate_freq(int count, int freq[], int size); //roll output
void print_freq(int freq[], int size); //frequency of each number

int main(void)
{
	int count = read_count();
	int freq[DICE_NUM] = {0};
	generate_freq(count, freq, DICE_NUM);
	print_freq(freq, DICE_NUM);	
}

int read_count() {
	int count;
	cout << "How many times you want to roll a dice?" << endl;
	cin >> count;
	return count;
}

void generate_freq(int count, int freq[], int size) {
	int rand_no;
	srand(time(NULL));
	cout << "The outcome of " << count << "rolls are: ";
	for (int i = 0; i < count; i++) {
		rand_no = rand() % size + 1;
		cout << rand_no << " ";
		freq[rand_no - 1]++;
	}
}

void print_freq(int freq[], int size) {
	cout << "\n\nOutcome\tFrequency\n";
	cout << "=======\t=========\n";
	for (int i = 0; i < size; i++) {
		cout << i + 1 << "\t" << setw(2) << freq[i] << endl;
	}
}

#include "Basic.h"
#include "WorkwithFile.h"
#include "WorkwithSong.h"
using namespace std;
int main() {
	Song songs[MAX_SONGS];
	int choice;
	int count_song = 0;
	char filename[100];
	char NAME[100];
	char AUTHOR[100];
	char TEXT[1000];
	// “ут в нас менюха
	do {
		cout << "\tYour menu:\n";
		cout << "\t1. Add a song\n";
		cout << "\t2. Display all songs\n";
		cout << "\t3. Delete a song\n";
		cout << "\t4. Modify a song\n";
		cout << "\t5. Save songs to file\n";
		cout << "\t6. Load songs from file\n";
		cout << "\t7. Search songs by author\n";
		cout << "\t8. Search songs by word\n";
		cout << "\t9. Exit\n";
		cout << "\n\n\tEnter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			addSong(songs, count_song);
			break;
		case 2:
			DisplaySong(songs, count_song);
			break;
		case 3:
			cout << "Enter the title of the song to delete: ";
			cin.ignore();
			cin.getline(NAME, MAX_NAME_LENGTH);
			RevomeSong(songs, count_song, NAME);
			break;
		case 4:
			cout << "Enter the title of the song to modify: ";
			cin.ignore();
			cin.getline(NAME, MAX_NAME_LENGTH);
			ChangeText(songs, count_song, NAME);
			break;
		case 5:
			cout << "Enter name file to save: ";
			cin >> filename;
			SaveFileSong(songs, count_song, filename);
			break;
		case 6:
			cout << "Enter name file to load: ";
			cin >> filename;
			LoadFileSong(songs, count_song, filename);
			break;
		case 7:
			cout << "Enter the author of the song to find him: ";
			cin.ignore();
			cin.getline(AUTHOR, MAX_AUTHOR_LENGTH);
			SearchAuthor(songs, count_song, AUTHOR);
			break;
		case 8:
			cout << "Enter the TEXT of the song to find it: ";
			cin.ignore();
			cin.getline(TEXT, MAX_TEXT_LENGTH);
			SearchText(songs, count_song, TEXT);
			break;
		case 9:
			cout << "Exit!";
			break;
		}
	} while (choice != 9);
}
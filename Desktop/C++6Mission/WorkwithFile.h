#pragma once
void SaveFileSong(Song* songs, int& count_song, const char* NAME_FILE) {
	ofstream fout(NAME_FILE);

	if (fout.is_open())
	{
		for (size_t i = 0; i < count_song; i++)
		{
			fout << "Title: " << songs[i].name << endl;
			fout << "Author: " << songs[i].author << endl;
			fout << "Year: " << songs[i].year << endl;
			fout << "Text: " << songs[i].text << endl;
		}
		cout << "Successfully!\n";
		fout.close();
	}
	else
	{
		cerr << "Error";
	}
}

void LoadFileSong(Song* songs, int& count_song, const char* NAME_FILE) {
	ifstream fin(NAME_FILE);
	if (fin.is_open())
	{
		while (count_song < MAX_SONGS && fin.getline(songs[count_song].name, MAX_NAME_LENGTH))
			/*вводить цикл для читання рядків із файлу, цикл продовжується, доки у файлі є більше рядків
			і кожен виклик fin.getlineбуде успішним. */
		{
			fin.getline(songs[count_song].name, MAX_NAME_LENGTH);
			fin.getline(songs[count_song].author, MAX_AUTHOR_LENGTH);
			fin.getline(songs[count_song].year, MAX_YEAR_LENGTH);
			fin.getline(songs[count_song].text, MAX_TEXT_LENGTH);
			++count_song;
		}
		cout << "Successfully!\n";
		fin.close();
	}
	else {
		cerr << "Error!";
	}
}

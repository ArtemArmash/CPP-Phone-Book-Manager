#pragma once
void addSong(Song* songs, int& count_song) {
	if (count_song < MAX_SONGS)
	{
		cout << "Enter name song: ";
		cin.ignore();
		cin.getline(songs[count_song].name, MAX_NAME_LENGTH);

		cout << "Enter author song: ";
		cin.getline(songs[count_song].author, MAX_AUTHOR_LENGTH);

		cout << "Enter year song: ";
		cin.getline(songs[count_song].year, MAX_YEAR_LENGTH);

		cout << "Enter text for song: ";
		cin.getline(songs[count_song].text, MAX_TEXT_LENGTH);

		++count_song;
	}
	else cout << "You have more song! " << count_song << "/" << MAX_SONGS;
}

void DisplaySong(Song* songs, int count_song) {
	for (size_t i = 0; i < count_song; i++)
	{
		cout << "\nSong #" << (i + 1) << ":\n";
		cout << "Title: " << songs[i].name << "\n";
		cout << "Author: " << songs[i].author << "\n";
		cout << "Year: " << songs[i].year << "\n";
		cout << "Text: " << songs[i].text << "\n";
	}
}

void RevomeSong(Song* songs, int& count_song, const char* Title_DELETE) {
	for (size_t i = 0; i < count_song; i++)
	{
		// ��� ���� ����� ����������, �� ������, �� ���� ��������.
		if (strcmp(songs[i].name, Title_DELETE) == 0)
		{
			count_song--;
			swap(songs[i], songs[count_song]); //������ ������� ���� ��������� ����� � �����.
			cout << "Song deleted!\n";
			return;
		}
		else cout << "Not found Song!";
	}
}

void ChangeText(Song* songs, int count_song, const char* Name_Change) {
	for (size_t i = 0; i < count_song; i++)
	{
		if (strcmp(songs[i].name, Name_Change) == 0) //  �� ����� ��������, �� ����� ������� ��� ������� ����� 
		{

			cout << "Enter new text in song: \n";
			cin.getline(songs[i].text, MAX_TEXT_LENGTH);
			return;
		}
	}
}

void SearchAuthor(Song* songs, int count_song, const char* search_author) {
	bool found = false; // �� ��� ���������� ����, �� �������� ��� ��������� ������
	for (size_t i = 0; i < count_song; i++)
	{
		if (strcmp(songs[i].author, search_author) == 0)
		{
			if (!found) // ��������, �� found � �����. ���� ���, - �� ������, �� �� ����� ����
			{
				cout << "Song: " << search_author << ":\n";
				found = true;
			}
			cout << "Title: " << songs[i].name << "\n";
			cout << "Author: " << songs[i].author << "\n";
			cout << "Year: " << songs[i].year << "\n";
			cout << "Text: " << songs[i].text << "\n";
		}
	}
}

void SearchText(Song* songs, int count_song, const char* search_text) {
	bool found = false;
	for (size_t i = 0; i < count_song; i++)
	{
		if (strstr(songs[i].text, search_text) != nullptr) // ��������, �� ������ ����� ������� ��� ������� �� ��������� strstr
		{
			if (!found)
			{
				cout << "Text: " << search_text << ":\n";
				found = true;
			}
			cout << "Title: " << songs[i].name << "\n";
			cout << "Author: " << songs[i].author << "\n";
			cout << "Year: " << songs[i].year << "\n";
			cout << "Text: " << songs[i].text << "\n";
		}
	}
}
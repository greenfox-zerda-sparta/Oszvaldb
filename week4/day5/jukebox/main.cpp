#include <iostream>
#include <string>

using namespace std;


class Song {
private:
    string song_title;
    string artist_name;
    unsigned int song_rating;
public:
    Song(string title, string artist) {
        this->song_title = title;
        this->artist_name = artist;
    }
    string get_song_title () {
       return song_title;
    }
    string get_artist_name () {
        return artist_name;
    }
    unsigned int get_rating () {
            return song_rating;
    }
    void rate_song(unsigned int rating) {
        if (rating > 0 && rating < 6) {
            this->song_rating = rating;
        }
    }
};



int main() {
    Song Stairway ("Stairway to heaven", "Led Zeppelin");
    Stairway.rate_song(5);
    cout << "artist: " << Stairway.get_artist_name() << ", title: " << Stairway.get_song_title() << ", rating: " << Stairway.get_rating() << endl;

    return 0;
}
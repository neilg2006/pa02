#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

string prefixFinder(const map<string, double>& movies, string prefix) {

    map<double, set<string>, greater<>> orderedMovies;

    for (const auto& [title, rating] : movies) {
        if (title.substr(0, prefix.size()) == prefix) {
            orderedMovies[rating].insert(title);
        }
    }

    if (orderedMovies.empty()) {
        return "No movies found with prefix ";
    }

    for (const auto& [rating, titles] : orderedMovies) {
        for (const auto& title : titles) {
            cout << title << ", " << rating << endl;
        }
    }

    const auto& topMovie = *orderedMovies.begin()->second.begin();
    return topMovie;
}

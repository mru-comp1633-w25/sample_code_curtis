#include "mylib.h"
#include <iostream>
using namespace std;

void addstuff(URLStack s, const char *stuff) {
    s.push(stuff);
    // actually doing nothing
} 

int main() {
    URLStack history(10); // max 10 pages
    history.push("https://www.mymru.ca/");

    addstuff(history, "stuff");
    
    history.push("https://stackoverflow.com/");
    history.push("https://www.funnycatvideos.com/");

    URL current_page = {"https://chat.openai.com/"};

    URL backup_current = current_page;
    cout << &(current_page.url) << endl;
    cout << &(backup_current.url) << endl;
  
    URLStack history2(10);
    history2 = history;
    history = history;
    
    // go back to the previous page
    current_page = history.pop();

    // hover over the back button
    if (history.empty()) {
        cout << "First page, can't go back\n" << endl;
    } else {
        cout << "Click to go back to: " << history.peek().url << endl;
    }
    return 0;
}

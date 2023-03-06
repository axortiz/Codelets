#include <iostream>
#include <vector>
using namespace std;

/*
Prompt: If you run that code, you can see how to insert and how to copy. 
Then in the last section, I make a vector called vec3 and put some integers in it. 
Then I make an iterator that points at the beginning of the vector, and start inserting. 
Things go well for a couple of steps, and then an "invalid pointer" error occurs. 
What happened to cause this error? It should only take a sentence to explain.
Possible hint: To fix the error, change the line
*/

ostream &operator<<(ostream &output, vector<int> vec) {
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
        output << *it << ' ';
    }
    return output;
}

void add_data(vector<int> &vec, int data_to_add) {
    vec.push_back(data_to_add);
}

int main() {
    vector<int> vec1;
    for (int i = 0; i < 9; i++) {
        add_data(vec1, i + 10);
    }
    cout << "vec1: " << vec1 << endl;    
    
    // Inserting into a vector:
    cout << "\nInserting.." << endl;
    vector<int>::iterator it1 = vec1.begin();
    vec1.insert(it1, 44);
    cout << "vec1: " << vec1 << endl;
    vector<int>::iterator it2 = vec1.begin() + 2;
    vec1.insert(it2, 55);
    cout << "vec1: " << vec1 << endl;

    // Copying a vector:
    cout << "\nCopying.." << endl;
    vector<int> vec2;
    vec2 = vec1;
    cout << "vec2: " << vec2 << endl;
    vector<int>::iterator it0 = vec2.begin();
    vec2.insert(it0, 66);
    // After copying and inserting:
    cout << "vec1: " << vec1 << endl;
    cout << "vec2: " << vec2 << endl;

    // Iterator invalidation:
    cout << "\nInvalid iterator demo: " << endl;
    vector<int> vec3;
    for (int i = 0; i < 6; i++) {
        vec3.push_back(i + 100);
    }
    cout << "vec3: " << vec3 << endl;
    vector<int>::iterator it3 = vec3.begin();
    for (int i = 6; i < 12; i++) {
        it3 = vec3.insert(it3, i + 100);
        cout << "vec3: " << vec3 << endl;
    }
}
//The reason the code works the first few times is because the vector hasn't been copied and resized.
//When it DOES get resized, the vector is copied and pasted into a new and resized vector (dynamic array)
//but the iterator is left in the same memory location as the previous array that is not being used anymore.
//Equating the iterator to each addition to the array ensures we are keeping track of the vector's memory location
//at all times.
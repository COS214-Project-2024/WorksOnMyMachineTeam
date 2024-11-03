#include "CitizenNameGen.h"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <chrono>
#include <iostream>

static std::string firstNames[100] = {
    "James",
    "John",
    "William",
    "Michael",
    "David",
    "Robert",
    "Joseph",
    "Thomas",
    "Christopher",
    "Charles",
    "Daniel",
    "Matthew",
    "Anthony",
    "Donald",
    "Mark",
    "Paul",
    "Steven",
    "Andrew",
    "Kenneth",
    "George",
    "Joshua",
    "Kevin",
    "Brian",
    "Edward",
    "Ronald",
    "Timothy",
    "Mary",
    "Patricia",
    "Jennifer",
    "Elizabeth",
    "Linda",
    "Barbara",
    "Susan",
    "Jessica",
    "Sarah",
    "Karen",
    "Nancy",
    "Margaret",
    "Lisa",
    "Betty",
    "Dorothy",
    "Sandra",
    "Ashley",
    "Kimberly",
    "Emily",
    "Emma",
    "Olivia",
    "Ava",
    "Isabella",
    "Sophia",
    "Charlotte",
    "Amelia",
    "Harper",
    "Evelyn",
    "Abigail",
    "Noah",
    "Oliver",
    "Benjamin",
    "Elijah",
    "Lucas",
    "Mason",
    "Logan",
    "Alexander",
    "Ethan",
    "Jacob",
    "Samuel",
    "Henry",
    "Owen",
    "Sebastian",
    "Gabriel",
    "Grace",
    "Chloe",
    "Victoria",
    "Riley",
    "Lucy",
    "Eleanor",
    "Hannah",
    "Lillian",
    "Addison",
    "Aubrey",
    "Ella",
    "Natalie",
    "Zoe",
    "Leah",
    "Hazel",
    "Violet",
    "Aurora",
    "Savannah",
    "Audrey",
    "Brooklyn",
    "Alice",
    "Anna",
    "Caroline",
    "Julia",
    "Lauren",
    "Sophie",
    "Ruby",
    "Claire",
    "Lydia",
    "Eva"};

const char *lastNames[] = {
    "Smith",
    "Johnson",
    "Williams",
    "Brown",
    "Jones",
    "Miller",
    "Davis",
    "Garcia",
    "Rodriguez",
    "Wilson",
    "Martinez",
    "Anderson",
    "Taylor",
    "Thomas",
    "Hernandez",
    "Moore",
    "Martin",
    "Jackson",
    "Thompson",
    "White",
    "Lopez",
    "Lee",
    "Gonzalez",
    "Harris",
    "Clark",
    "Lewis",
    "Robinson",
    "Walker",
    "Perez",
    "Hall",
    "Young",
    "Allen",
    "Sanchez",
    "Wright",
    "King",
    "Scott",
    "Green",
    "Baker",
    "Adams",
    "Nelson",
    "Hill",
    "Ramirez",
    "Campbell",
    "Mitchell",
    "Roberts",
    "Carter",
    "Phillips",
    "Evans",
    "Turner",
    "Torres",
    "Parker",
    "Collins",
    "Edwards",
    "Stewart",
    "Flores",
    "Morris",
    "Murphy",
    "Rivera",
    "Cook",
    "Rogers",
    "Morgan",
    "Peterson",
    "Cooper",
    "Reed",
    "Bailey",
    "Bell",
    "Gomez",
    "Kelly",
    "Howard",
    "Ward",
    "Cox",
    "Diaz",
    "Richardson",
    "Wood",
    "Watson",
    "Brooks",
    "Bennett",
    "Gray",
    "James",
    "Reyes",
    "Cruz",
    "Hughes",
    "Price",
    "Myers",
    "Long",
    "Foster",
    "Sanders",
    "Ross",
    "Morales",
    "Powell",
    "Sullivan",
    "Russell",
    "Ortiz",
    "Jenkins",
    "Hamilton",
    "Graham",
    "Perry",
    "Butler",
    "Hayes",
    "Coleman"};

std::string
CitizenNameGen::generateName()
{
    // Picks two random numbers between 0 and 100
    int firstIndex = rand() % 100;
    int lastIndex = rand() % 100;

    // Return the line at the index of the random number of the respective text file
    return firstNames[firstIndex] + " " + lastNames[lastIndex];
}

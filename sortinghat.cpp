#include <iostream>
int main (){

std::string house;
int max = 0;
int gryffindor = 0;
int hufflepuff = 0;
int ravenclaw = 0;
int slytherin = 0;
int answer1;
int answer2;
int answer3;
int answer4;

std::cout << "You've begun the sorting hat quiz!\n\n";
std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
std::cout << "  1.) The Good\n";
std::cout << "  2.) The Great\n";
std::cout << "  3.) The Wise\n"; 
std::cout << "  4.) The Bold\n";
std::cin >> answer1; 

if (answer1 == 1){
  gryffindor++;
}
else if (answer1 == 2){
  hufflepuff++;
}
else if (answer1 == 3){
  ravenclaw++; 
}
else if (answer1 == 4){
  slytherin++;
}
else{
  std::cout << "invalid answer\n\n";
}

std::cout << "Q2) Which do you prefer, Dawn or Dusk?\n\n";
std::cout << " 1). Dawn\n";
std::cout << " 2). Dusk\n";
std::cin >> answer2; 

if (answer2 == 1){
  gryffindor++, ravenclaw++;
}
else if (answer2 == 2){
  hufflepuff++, slytherin++; 
}
else {
  std::cout << "Please enter a valid answer\n\n";
}

std::cout << "Q3) Which instrument most pleases your ear?\n\n";
std::cout << " 1). Violin\n";
std::cout << " 2). Trumpet\n";
std::cout << " 3). Piano\n";
std::cout << " 4). Drum\n";
std::cin >> answer3;

if (answer3 == 1){
  slytherin++;
}
else if (answer3 == 2){
  hufflepuff++;
}
else if (answer3 == 3){
  ravenclaw++;
}
else if (answer3 == 4){
  gryffindor++;
}
else {
  std::cout << "Invalud Input";
}

std::cout << "Q4) Which road tempts you the most?\n\n";
std::cout << " 1). The wide, sunny grassy lane\n";
std::cout << " 2). The narrow, dark, lanturn-lit alley\n";
std::cout << " 3). The twisting, leaf strewn path through the woords\n";
std::cout << " 4). The cobbled street Lined with ancient buildings\n";
std::cin >> answer4;

if (answer4 == 1){
  hufflepuff++; 
}
else if (answer4 == 2){
  slytherin++;
}
else if (answer4 == 3){
  gryffindor++; 
}
else if (answer4 == 4){
  ravenclaw++;
}
else{
std::cout << "Invalid answer";
}

if (gryffindor > max) {
  max = gryffindor;
  house = "Gryffindor";
}
if (hufflepuff > max){
  max = hufflepuff; 
  house = "Hufflepuff";
}
if (ravenclaw > max) {
  max = ravenclaw;
  house = "Ravenclaw";
}
if (slytherin > max) {
  max = slytherin;
  house = "Slytherin";
}

std::cout << house << "!\n";
system("pause");

}
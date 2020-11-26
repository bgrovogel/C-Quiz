#include <iostream> 
#include <string>

using namespace std;

char guess; //Answer user inputs for question.
int total;  //Total score.


//4 possible answers, correct answer and question score.
class Question{
public:
    void vector(string, string, string, string, string, char, int); 
    void askQuestion(); 

private:
    string Question_Text;
    string answer_a;
    string answer_b;
    string answer_c;
    string answer_d;

    char correct_answer;
    int Question_Score;
};

int randomfunc(int j) 
{ 
    return rand() % j; 
} 

int main()
{
    //Program Title designed with an ASCII art generator.
    //Link: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
    //https://codereview.stackexchange.com
    cout << R"(
   ___    _|"|_   _|"|_            ___     _   _    ___     ____  
  / __|  |_   _| |_   _|    o O O / _ \   | | | |  |_ _|   |_  /  
 | (__     |_|     |_|     o     | (_) |  | |_| |   | |     / /   
  \___|   _____   _____   TS__[O] \__\_\   \___/   |___|   /___|  
_|"""""|_|     |_|     | {======|_|"""""|_|"""""|_|"""""|_|"""""| 
"`-0-0-'"`-0-0-'"`-0-0-'./o--000'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 

    )" << "\n";

    cout << "Press enter to start...\n";
    cin.get();

    string yourname;
    cout << "What's your name?\n";
    cin >> yourname;
    cout << "\n";
    
    string respond;
    cout << "Are you ready to start the quiz, " << yourname << "? Yes/No.\n";
    cin >> respond;
    
    //If user says yes, the quiz begins.
    if (respond == "Yes" || respond == "yes" || respond == "YES") {
        cout << '\n';
        cout << "Good luck!\n";
        cout << "\n";
    }
    else
    {
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        return 0;
    }
    

    //Instances of the questions. 
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
    
    q1.vector("1. The default access specifer for the class members is",
        "public",
        "private",
        "protected",
        "None of the above",
        'b',
        10);

    q2.vector("2. 'cin' is an",
        "Class",
        "Package",
        "Object",
        "Namespace",
        'c',
        10);

    q3.vector("3. Which command is correctly written?",
        "cout >>",
        "cin <<",
        "cout <>",
        "cin >>",
        'd',
        10);

    q4.vector("4. What is this called, <iostream>?",
        "directive",
        "pre-processor directive",
        "file",
        "command",
        'b',
        10);

    q5.vector("5. What punctuation ends most lines of code?",
        " . ",
        " ; ",
        " : ",
        " ' ",
        'b',
        10);

    q6.vector("6. What command prints something to the screen?",
        "cin",
        "cout",
        "char",
        "print",
        'b',
        10);

    q7.vector("7. Which operator is used to resolve the scope of the global variable?",
        "->",
        ".",
        "*",
        "::",
        'd',
        10);

    q8.vector("8. Which type of data file is analogous to an audio cassette tape?",
        "Random access file",
        "Source code file",
        "Sequential access file",
        "Binary file",
        'c',
        10);

    q9.vector("9. How many times is a do while loop guaranteed to loop?",
        "1",
        "0",
        "Infinitely",
        "Variable",
        'a',
        10);

    q10.vector("10. What is the size of 'int'?",
        "4",
        "8",
        "2",
        "Compiler dependent",
        'd',
        10);

    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
   

    //Final score 
    cout << "Your Total Score is " << total << " out of 100!\n";
    cout << "\n";

    if (total > 70) {
        cout << R"(

 __   __   ___    _   _              ___    ___     ___     ___     ___     ___   
 \ \ / /  / _ \  | | | |    o O O   | _ \  /   \   / __|   / __|   | __|   |   \  
  \ V /  | (_) | | |_| |   o        |  _/  | - |   \__ \   \__ \   | _|    | |) | 
  _|_|_   \___/   \___/   TS__[O]  _|_|_   |_|_|   |___/   |___/   |___|   |___/  
_| """ |_|"""""|_|"""""| {======|_| """ |_|"""""|_|"""""|_|"""""|_|"""""|_|"""""| 
"`-0-0-'"`-0-0-'"`-0-0-'./o--000'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-'"`-0-0-' 

    )" << "\n";
        cout << "\n";
        cin.get();
        cin.ignore();
        return 0;
    }
    else
    {
        cout << "Sorry, come back and try again!\n";
        cout << "\n";
    }
    cin.get();
    cin.ignore();
    return 0;
}

//question guidelines. 
void Question::vector(string q, string a1, string a2, string a3, string a4, char ca, int qs)
{
    Question_Text = q;
    answer_a = a1;
    answer_b = a2;
    answer_c = a3;
    answer_d = a4;
    correct_answer = ca;
    Question_Score = qs;
}
//Format for possible answers displayed when program executes. 
void Question::askQuestion()
{
    cout << "\n";
    cout << Question_Text << "\n";
    cout << "a. " << answer_a << "\n";
    cout << "b. " << answer_b << "\n";
    cout << "c. " << answer_c << "\n";
    cout << "d. " << answer_d << "\n";
    cout << "\n";

    
    cout << "What is your answer?" << "\n";
    cin >> guess;
    
    if (guess == correct_answer) {
        cout << "\n";
        cout << "Correct!" << "\n";
        total += Question_Score;
        cout << "\n";
    }
    else
    {
        cout << "\n";
        cout << "Sorry, that is not correct..." << "\n";
        cout << "\n";
    }
}
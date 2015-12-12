// Mad-Lib
// Creates a story based on user input

#include "mad-lib_improved.h"

using namespace std;

string askText(const string& rPrompt);
int askNumber(const string& rPrompt);
void tellStory(const string& rName, const string& rNoun, const int& rNumber, const string& rBodyPart, 
	const string& rVerb);

void madLibImproved()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";
    
    string& name = askText("Please enter a name: ");
    string& noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a number: ");
    string& bodyPart = askText("Please enter a body part: ");
    string& verb = askText("Please enter a verb: ");
    
    tellStory(name, noun, number, bodyPart, verb);
}

string askText(const string& rPrompt)
{
    string text;
    cout << rPrompt;
    cin >> text; 
    return text;
}

int askNumber(const string& rPrompt)
{
    int num;
    cout << rPrompt;
    cin >> num;
    return num;
}

void tellStory(const string& rName, const string& rNoun, const int& rNumber, const string& rBodyPart, 
	const string& rVerb)
{
    cout << "\nHere's your story:\n";
    cout << "The famous explorer ";
    cout << rName;
    cout << " had nearly given up a life-long quest to find\n";
    cout << "The Lost City of ";
    cout << rNoun;
    cout << " when one day, the ";
    cout << rNoun;
    cout << " found the explorer.\n";
    cout << "Surrounded by ";
    cout << rNumber;
    cout << " " << rNoun;
    cout << ", a tear came to ";
    cout << rName << "'s ";
    cout << rBodyPart << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the ";
    cout << rNoun << "\n";
    cout << "promptly devoured ";
    cout << rName << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << rVerb;
    cout << " for.";
}
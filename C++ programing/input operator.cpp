#include <iostream>
#include <string>
using namespace std;

class YouTubeChannel
{
public:
    string Name;
    int SubscriberCount;
    YouTubeChannel(string name, int sub);
    friend void operator>>(istream &input, YouTubeChannel &ytChannel);
    friend void operator<<(ostream &COUT,  YouTubeChannel &ytChannel);
};

YouTubeChannel::YouTubeChannel(string name, int sub)
{
    Name = name;
    SubscriberCount = sub;
}

void operator>>(istream& input, YouTubeChannel& ytChannel)
{
    input >> ytChannel.Name;
    input >> ytChannel.SubscriberCount;
}

void operator<<(ostream& COUT, YouTubeChannel& ytChannel)
{
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "No of Subs: " << ytChannel.SubscriberCount << endl;
}

int main()
{
    YouTubeChannel yt1("CodeBeauty", 50000);
    YouTubeChannel yt2("Apna College", 80000);

    cout<< yt1;
    cout<< yt2;

    return 0;
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Define rank of cards
enum Rank
{
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    INVALID_RANK,
};

// Define set of cards
enum Suit
{
    CLUB = 1,
    DIADMOND,
    HEART,
    SPARDE,
    INVALID_RANK,
};

// Represent a card
Class Card
{
    Suit _suit;
    Rank _rank;

public:
    // Constructor
    card(Suit _suit, Rank _rank) : _suit(suit_), _rank(rank_) {}

    Suit suit()
    {
        return _suit;
    }

    Rank rank()
    {
        return _rank;
    }
};

// Comparing cards A friendly advice according to microsoft help page: CONSIDER defining a struct instead of a class if instances of the type are small and commonly short-lived or are commonly embedded in other objects.
struct CardCompare
{
    static bool before(Card *card1, Card *card2)
    {
        if (card->suit() < card->suit())
        {
            return true;
        }
        if (card->suit() == card->suit())
        {
            if (card->rank() < card->rank())
            {
                return true;
            }
        }
        return false;
    }
};

class CardFactory
{
public:
    static Card *createCard(int cardNum)
    {
        Suit suit = getSuit((cardNum / 13) + 1);
        Rank rank = getRank((cardNum % 13) + 1);
        Card *card = new Card(suit, rank);
        return card;
    }

    static Rank getRank(int rankNum)
    {
        switch (rankNum)
        {
        case 1:
            return Rank::ACE;
        case 2:
            return Rank::TWO;
        case 3:
            return Rank::THREE;
        case 4:
            return Rank::FOUR;
        case 5:
            return Rank::FIVE;
        case 6:
            return Rank::SIX;
        case 7:
            return Rank::SEVEN;
        case 8:
            return Rank::EIGHT;
        case 9:
            return Rank::NINE;
        case 10:
            return Rank::TEN;
        case 11:
            return Rank::JACK;
        case 12:
            return Rank::QUEEN;
        case 13:
            return Rank::KING;
        }
        return Rank::INVALID_RANK;
    }

    Static Suit getSuit(int suitNum)
    {
        switch (suitNum)
        {
        case 1:
            return Suit::CLUB;
        case 2:
            return Suit::DIAMOND;
        case 3:
            return Suit::HEART;
        case 4:
            return Suit::SPADE;
        }
    }
};

class Deck
{
    vector<Card *> deckOfCards;
    CardFactory CardFactory;

public:
    Deck() {}

    Deck(int numOfCards)
    {
        for (int i = 0; i < numOfCards; i++)
        {
            deckOfCards.push_back(CardFactory.createCard((i)));
        }
    }

    void shuffleCards()
    {
        random_shuffle(deckOfCards.begin(), deckOfCards.end());
    }

    void sortCards()
    {
        sort(deckOfCards.begin(), deckOfCards).end(), CardCompare::before());
    }

    Card *getTopCard()
    {
        Card *card = deckOfCards.back();
        deckOfCards.pop_back()();
        return card;
    }

    void addCard(Card *c)
    {
        deckOfCards.push_back((c));
    }

    void ShowDeck()
    {
        vector<Card *>::iterator it;
        for (it = deckOfCards.begin(); it != deckOfCards.end(); it++)
            cout << (*it)->suit() << " " << (*it)->rank() << endl;
    }
};

Class Player
{
    string name;
    Deck *deck;

public:
    Player(string playerName)
    {
        name = playerName;
        deck = new Deck();
    }

    void addCard(card * c)
    {
        deck->addCard(c);
    }
};

Class Dealer
{
    Deck *deck;

public:
    Dealer(int deckSize)
    {
        deck = new deck(deckSize);
        deck->ShuffleCards();
    }

    void deal(vector<Player *> & players, int numOfCards)
    {
        for (Player *player : players)
        {
            for (int i = 0; i < numOfCards; i++)
            {
                player->addCard(deck->getTopCard());
            }
        }
    }
};

int main()
{

    int numOfPlayers = 4;
    int numOfCards = 52;
    vector<Player *> players;
    players.push_back(new Player("Vijay"));
    players.push_back(new Player("Ravi"));
    players.push_back(new Player("Nikhil"));
    players.push_back(new Player("Sonu"));

    Dealer *dealer = new Dealer(numOfCards);
    dealer->deal(players, numOfPlayers);
    return 0;
}
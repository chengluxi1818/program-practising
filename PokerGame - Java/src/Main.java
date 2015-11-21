abstract class Game {
	private Deck deck;
	private Player[] players;
	
	public Game(int np) {
		players = new Player[np];
		shuffle();
	}
	public void shuffle() {
		// shuffle the Deck
	}
	public abstract boolean isOver();
	public abstract void play();
}

enum Suit {
	Club, Diamond, Spade, Heart
}

enum Num {
	Ace, One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Joker
}

class Card {	
	private int val;
	public Num num;
	public Suit suit;
	
	public Card(int val) {
		this.val = val;
		setCard(val);
	}
	
	private void setCard(int val) {
		if(val < 0 || val > 53) {
			// TODO: complain the error
			return;
		}
		
		this.num = Num.values()[val % 13];
		this.suit = Suit.values()[val / 13];
		if(val == 52 || val == 53) {
			this.num = Num.Joker;
			this.suit = null;
		}
		
		return;
	}
}

class Deck {
	private Card[] cards;
	private int numCards;
	public Deck() {
		this.numCards = 54;
		cards = new Card[54];
		for(int i = 0; i < numCards; i++) {
			cards[i] = new Card(i);
		}
	}
}

class Player {
	private String ID;
	private int numCards;
	private Card[] cardsInHand;
	public boolean isPlaying;
	
	public Player(String id) {
		this.ID = id;
		this.numCards = 0;
	}
	
	public void getCard(Card c) {
		cardsInHand[numCards++] = c;
	}
}

public class Main {

}

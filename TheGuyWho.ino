 /*
"THE GUY WHO NEVER COMPLAINS"
by Juice Lizard.
juice.lizard@hotmail.fr
www.juicelizard.canalblog.com
Text written in 2016, program coded in 2017 for the Arduboy.
*/

// Warning! To avoid blinking, please uncomment this:
//#define EPILEPSY_PROTECTION_MODE

#include <Arduboy2.h>

Arduboy2 arduboy;

const unsigned char smiley48[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xf, 0xf, 0xf, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf, 0xf, 0xf, 0xf, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0xf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const unsigned char love[] PROGMEM = {
	0x80, 0x40, 0x40, 0xfe, 0x5, 0x5, 0xfe, 0x40, 0x40, 0x80, 0x1, 0x2, 0x2, 0x00, 0x00, 0x00, 0x00, 0x2, 0x2, 0x1, 
};

int page = 0;

void setup() {
	
	arduboy.begin();

	arduboy.setFrameRate(40);
}

void loop() {

	if (!(arduboy.nextFrame()))
	return;

	arduboy.pollButtons();

	arduboy.clear();

	if(arduboy.justPressed(A_BUTTON)){
	if(page < 89){
	page = page + 1;
	}
	}
	if(arduboy.justPressed(B_BUTTON)){
	if(page > 0){
	page = page - 1;
	}
	}

	switch(page){
	case 0:
		arduboy.setTextSize(3);
		arduboy.print(F("THE GUY"));
		arduboy.setTextSize(1);
		if(arduboy.pressed(DOWN_BUTTON) && arduboy.pressed(RIGHT_BUTTON)) {
		page = 79;
		}
		break;
	case 1:
		arduboy.setTextSize(6);
		arduboy.print(F("WHO"));
		arduboy.setTextSize(1);
		break;
	case 2:
		arduboy.setTextSize(4);
		arduboy.print(F("NEVER"));
		arduboy.setTextSize(1);
		break;
	case 3:
		arduboy.setTextSize(2);
		arduboy.print(F("COMPLAINS"));
		arduboy.setTextSize(1);
		break;
	case 4:
		arduboy.print(F("\n\n\n\n\n\n\n ... by Juice Lizard."));
		break;	
	case 5:
		arduboy.print(F("This is a work of\nfiction. Bits, in-\nputs, sprites and\nlines of code either\nare products of Juice\nLizard's imagination.\nAny resemblance to\nactual hardwares or"));
		break;
	case 6:
		arduboy.print(F("softwares or video\ngames characters,\npixelated or polygo-\nnal, is purely coin-\ncidental."));
		break;
	case 7:
	
#if !defined(EPILEPSY_PROTECTION_MODE)
		if(arduboy.everyXFrames(2)){
		arduboy.fillRect(0, 0, 128, 64, WHITE);
		}
#endif
		
		arduboy.drawBitmap(40, 8, smiley48, 48, 48, WHITE);
		break;	
	case 8:
		arduboy.print(F("1_My boyfriends are\nreally cool. When\nthey travel to the\nNorth Pole, they send\nme some good ice\ncream. My girlfriends\nare really hot. When\nthey go to the"));
		break;
	case 9:
		arduboy.print(F("desert, they bring me\nsome magic sand. If\nyou put it inside a\nhourglass, it falls\nto the top, so time\ngoes backward. It is\nvery useful to meet\nsome meat eating"));
		break;	
	case 10:
		arduboy.print(F("dinosaurs and sell\nthem some dental\ncare."));
		break;	
	case 11:
		arduboy.print(F("2_My wife's hair's\ncolor changes every\nweek! Blue, black,\nred, purple, yellow\nand green. It's for\nthe ice cream flavors\nto fit! Don't under-\nestimate the power of"));
		break;
	case 12:
		arduboy.print(F("food fashion! If you\neat a salad, please\nwear a green hat.\nIt's a free tip I\ngive you to improve\nyour love power."));
		break;
	case 13:
		arduboy.print(F("3_I hear music for\nfree. I play video\ngames for free. I eat\nsushi for free. I\nearn money because I\nfind pictures on the\nbills so nice! In my\ncountry there are"));
		break;
	case 14:
		arduboy.print(F("funny monsters prin-\nted on the banknotes,\nabout two hundred\ndifferent ones. So we\nwork and we earn mo-\nney to collect them\nall. My favorite is\nthe one who cries"));
		break;
	case 15:
		arduboy.print(F("strawberry milk."));
		break;
	case 16:
		arduboy.print(F("4_Rainy days are cool\ndays, because I've\ninvented a sport that\nwe can play only when\nit rains. It is a\ncool sport because\nevery player wins at\nevery moment of the"));
		break;
	case 17:
		arduboy.print(F("game. We play smiling\nand don't sweat a lot\nand we eat sugary\nmushrooms during our\nbreak. I like the\nblue red and golden\none."));
		break;
	case 18:
		arduboy.print(F("5_Video games are so\nfun! I like the way\nthe buttons are ar-\nranged on the con-\ntroller. The left\nside are for my left\nfingers and right\nside ones are for my"));
		break;
	case 19:
		arduboy.print(F("right fingers. And\nmiddle side buttons\nfor... my nose I\nguess. So it's per-\nfect!"));
		if(arduboy.pressed(UP_BUTTON) && arduboy.pressed(DOWN_BUTTON)) {
		arduboy.drawBitmap(59, 54, love, 10, 10, WHITE);
		}
		break;
	case 20:
		arduboy.print(F("6_When I go to the\nrestaurant, the cook\ncooks for me. When I\ngo to school, the\nteachers teach for\nme. They are wearing\nthe same clothes as\nme because I am so"));
		break;	 
	case 21:
		arduboy.print(F("cool. When I read a\nbook, the authors\nwrite for me. They\ninvent stories where\nI am a super knight\nfighting a dragon.\nAnd at the end every\none is happy because")); // it's peaceful and the dragon and I are married."));
		break;
	case 22:
		arduboy.print(F("it's peaceful and the\ndragon and I are mar-\nried. When I go to a\nconcert, the singers\nsing for me. I don't\ngo to concert too of-\nten, as my heart is\nfragile and I don't"));
		break;
	case 23:
		arduboy.print(F("like to cry in pub-\nlic."));
		break;		 
	case 24:
		arduboy.print(F("7_Last time I went to\nthe baker's shop, the\nbaker girl told me:\n\"Don't give me money,\nI offer you this\nbread.\" When I ate\nthe bread, I found a\nsmall paper inside,\n"));
		break;	 
	case 25:
		arduboy.print(F("asking: \"Would you\nmarry me?\" Then I an-\nswered to the bread:\n\"No, I just want to\neat you!\" And I fin-\nished the bread."));
		break; 
	case 26:
		arduboy.print(F("8_My body has a lot\nof powers. I have the\nability to control\nmovements of my hands\nand my feet only by\nthe power of my will,\nwithout using oil or\nelectricity. My body"));
		break;		 
	case 27:
		arduboy.print(F("is also very eco-\nfriendly: it products\nfree fertilizer that\nI can use in my gar-\nden to grow vegeta-\nbles and magic plants\nthat grow to the sky.\nSometimes I climb on"));
		break; 
	case 28:
		arduboy.print(F("it to take tea on the\nMoon. The grey in the\nlandscape highlights\nthe colors of my\nclothes."));
		break; 
	case 29:
		arduboy.print(F("9_When I go to the\nMoon with the magic\nplant of my garden, I\ncan see a portrait of\nme, made with hun-\ndreds of kilometers\nof long walls, on the\nEarth surface. It was"));
		break;
	case 30:
		arduboy.print(F("built by a foreign\ncountry for my birth-\nday."));
		break;
	case 31:
		arduboy.print(F("10_In the town where\nI live, there are\nplenty of kids for\npeople who don't want\nkids. They are\nsweeter than standard\nkids. They are quiet\nand rarely cry. They"));
		break;
	case 32:
		arduboy.print(F("don't use bad words.\nThey don't ask for\nbig amount of money\nor new video game\nsystems. They are al-\nways on time for\nmeals and even warn\nyou if you forget to"));
		break;
	case 33:
		arduboy.print(F("give them food. They\nare cute and they\nlove you. They stay\nkids all their life.\nYou don't have to ask\nthem to go to shool\nor to find a job. At\nthe end, they seem to"));
		break;
	case 34:
		arduboy.print(F("fall asleep and dis-\nappear, but they just\nbegin their second\nlife, where they con-\ntrol the world in se-\ncret, using magic fur\npower to cast elec-\ntronic waves that"));
		break;
	case 35:
		arduboy.print(F("command the internet."));
		break;				
	case 36:
		arduboy.print(F("11_My favorite sport\nis the goodminton.\nThe animals I like\nthe most are the\ngoodgers. I appreci-\nate goodass people,\nthey are strong and\ngentle.I can read"));
		break;
	case 37:
		arduboy.print(F("your destiny in a\nrainbow. You will die\nfor an ice cream. My\nneighbors cook it of-\nten. They make it\nusing milk from their\nfluorescent ponies.\nWhen you eat it, your"));
		break;
	case 38:
		arduboy.print(F("sex power increases."));
		break;		
	case 39:
		arduboy.print(F("12_I was born in the\nspecies that I want,\nwith the gender that\nI want, in the good\ncentury, with the\nright skin color, in\na country where there\nare no lord but a lot"));
		break;	
	case 40:
		arduboy.print(F("of gods and god-\ndesses. I have two\nfeet and two hands. I\nplay magic cube and I\ndon't need to know\nhow to solve it be-\ncause I love equally\nall of its colors"));
		break; 
	case 41:
		arduboy.print(F("combinations."));
		break; 
	case 42:
		arduboy.print(F("13_I dreamt about you\nlast night. You were\nriding a bulldozer,\nyou had mouse ears\nand your name was\nJean-Michel."));
		break; 
	case 43:
		arduboy.print(F("14_Where I live, all\npeople that have in-\nteresting things to\nsay speak in English,\nand people who say\nstupid or sad things\nspeak in a strange\nlanguage that I don't"));
		break;
	case 44:
		arduboy.print(F("understand. I like\ndrugs."));
		break;
	case 45:
		arduboy.print(F("15_Minus times minus\nresults in a plus.\nFar bigger than\nPluton is Uranus."));
		break;
	case 46:
		arduboy.print(F("16_My cat phoned me.\nHe said three times\nmeow, that means\naliens are coming\nnext summer to play\ntable football with\nus. As they are\ngreen, really small"));
		break;
	case 47:
		arduboy.print(F("and really strong,\nthey directly go in-\nside the table foot-\nball instead of the\nwooden players to\ncompete with us. They\ndon't shoot very fast\nbut they can mind"));
		break;
	case 48:
		arduboy.print(F("control the ball, so\nit's not easy to beat\nthem. Losers choose a\ngame for the next\nmeeting."));
		break;
	case 49:
		arduboy.print(F("17_I am unique. I am\nso different from\nother guys that no-\nbody can determine my\nreal price. Nothing\nknown to compare\nwith. This is why no-\nbody wants to sell"));
		break;
	case 50:
		arduboy.print(F("me. All people around\nwant to keep me with\nthem."));
		break;		
	case 51:
		arduboy.print(F("18_I like philosophy\nlessons. Our teacher\ntold us how to drug\nourselves by breath-\ning air. I will teach\nyou too if you are\nover eighteen. I want\nto paint your name on"));
		break;
	case 52:
		arduboy.print(F("the grass."));
		break;
	case 53:
		arduboy.print(F("19_\"I am with you. So\nclose. I will stay\nwith you forever.\n-Thank you! You're so\nnice.\n-I'm not nice. I'm a\ncavity.\n-Doesn't matter. I"));
		break;
	case 54:
		arduboy.print(F("still love you.\""));
		break;
	case 55:
		arduboy.print(F("20_I found a golden\nring on the ground\nthis morning. What do\nyou think? Should I\ntake it and gift it\nfor one of my girl-\nfriends or leave it\nat its place for the"));
		break;		
	case 56:
		arduboy.print(F("blue hedgehogs that\ncan use it to be\nhealthier? There are\nsome living beings\nrunning through the\ncity."));
		break;
	case 57:
		arduboy.print(F("21_\"No my friend! The\nthings won't go as\nyou wish! Not this\ntime!\" Oh man, life's\nso hard! I fight\nagainst people, even\nagainst my closest\nfriend, to pay the"));
		break;
	case 58:
		arduboy.print(F("bill at the bar. What\na conflicting world!"));
		break;
	case 59:
		arduboy.print(F("22_There's a bug\nclimbing on my laptop\nscreen. It's funny\nthe way it's walking\nthrough. It seems to\nbe drunk. If it\nreaches the top be-\ntween these two"));
		break;
	case 60:
		arduboy.print(F("icons, I win. More on\nthe left or more on\nthe right, I lose. I\nam allowed to use the\narrow icon to influ-\nence it. Did you know\nbugs have hair too?"));
		break;
	case 61:
		arduboy.print(F("23_I like to play\ncards because I can\nfeed horses with su-\nper carrots and spank\ntheir ass to make\nthem go faster. It's\nraining your favorite\nsong. Love is good."));
		break;
	case 62:
		arduboy.print(F("24_Spring is hot. The\nSun's a big dot.\nGirls and girls blow\nme some air. My fan\nclub are people who\ncare."));
		break;
	case 63:
		arduboy.print(F("25_They're my snail\nslaves. They work to\nmake my garden more\nshinny, with their\nslime. I feed them\nwith golden powder\nand turnip juice.\nThey are very slow"));
		break;		
	case 64:
		arduboy.print(F("but they work fifty\nhours a day."));
		break;
	case 65:
		arduboy.print(F("26_I pet the spikes,\nI pet the spikes. I\nhave got a wife, a\nknife and a dog. I\nhave everything to\nlose and I pet a\nhedgehog."));
		break;
	case 66:
		arduboy.print(F("27_Easy recipe to\nprepare milk. Take\nthe dessert from the\ncups with a big spoon\nand put it in a dish.\nJoin it together. Put\nthe dish inside a\nfridge and wait two"));
		break;
	case 67:
		arduboy.print(F("hours to get it a\nlittle warmer. Put it\non a table to make it\nmuch warmer for half\nan hour. Be careful\nto your cat, he could\nmake your plan fail.\nSuck up the hot green"));
		break;		
	case 68:
		arduboy.print(F("milk with a saucepan.\nTake off the sponge\nfingers from the dish\nand put it inside a\nbox. Separate the\nmilk and the pista-\nchio flavor powder\nwith a whisk. Then,"));
		break;
	case 69:
		arduboy.print(F("cold down the hot\nmilk with the fire\nunder the saucepan.\nYour milk is ready!"));
		break;
	case 70:
		arduboy.print(F("28_Today, I learn to\neat a new dessert."));
		break;
	case 71:
		arduboy.print(F("29_Eyes in eyes. In\nthis elastic square.\nRed gloves covered by\nlipstick. She punched\nme right on the face.\nPink! Punk! I look\nlike I was smacked on\nthe chicks and on the"));
		break;
	case 72:
		arduboy.print(F("eyes. A few rounds of\nlove, now I am so\nK.O."));
		if(arduboy.pressed(LEFT_BUTTON) && arduboy.pressed(RIGHT_BUTTON)) {
		arduboy.print(F("\n\n\n\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x7F\x5F\x7F\n\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x94\x28\xF8\x78\xF8\x29\x94\n\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x20\x28\x20\x20\x20\x20\x20\x29"));
		}
		break;
	case 73:
		arduboy.print(F("30_I like horses. As\nI have a huge imagi-\nnation, their owner\nasks me to give them\nnames. Titanium\nCarrot doesn't run so\nfast, but he's always\nin a good mood. Night"));
		break;
	case 74:
		arduboy.print(F("Mare doesn't like to\nbe pet, but she's a\ngood bodyguard, use-\nful when we go to\nparties. Horses life\nisn't much compli-\ncated. They agree to\nmake love with what"));
		break;
	case 75:
		arduboy.print(F("we present to them,\neven with their sis-\nter or brother."));
		break;
	case 76:
		arduboy.print(F("31_You are my sun and\nI am your lizard. We\nare the funny toys\nthat were made in\nShina."));
		break;
	case 77:
		arduboy.print(F("32_The planet where I\nlive is close to our\nsun. So a year is\nonly seven days. It's\nalways summer and ev-\nery week we celebrate\nour birthday. As we\noften buy gifts, the"));
		break;
	case 78:
		arduboy.print(F("economy is going very\nwell. It rains money\nand our three-headed\ndogs never poop. They\neat sunlight with\ntheir photosensitive\nskin."));
		break; 
	case 79:
	
#if !defined(EPILEPSY_PROTECTION_MODE)
		if(arduboy.everyXFrames(2)){
#endif
		arduboy.setTextSize(2);
		arduboy.setCursor(22, 24);
		arduboy.print(F("THE END"));
		arduboy.setTextSize(1);
#if !defined(EPILEPSY_PROTECTION_MODE)
		}
#endif
		if(arduboy.pressed(LEFT_BUTTON) && arduboy.pressed(UP_BUTTON)) {
		page = 0;
		}
		break;	 
	case 80:	
		arduboy.print(F("Le r\x82tr\x82""cissement du\nmonde me fait peur.\nJ'ai peur que tout\nsoit pareil, que tout\nsoit vid\x82, que tout\nsoit laid et qu'il\nn'y ai pas d'alterna-\ntive.\nJe suis arriv\x82 malgr\x82"));
		break;
	case 81:
		arduboy.print(F("Je suis arriv\x82 malgr\x82\nmoi dans un monde an-\ncien, qui pourrait se\npasser de moi. Je ne\nsuis pas en accord\navec la vie. Je re-\nmet en question mon\nexistence m\x88me."));
		break;
	case 82:
		arduboy.print(F("Nous d\x82truisons nos\npropres richesses, et\nnous appelons riches-\nses les seigneurs que\nnous avons nous-m\x88mes\nplac\x82 sur le tr\x93ne,\net qui nous com-\nmandent sans nous"));
		break;
	case 83:
		arduboy.print(F("comprendre.\nLa fatigue me gagne\net le ciel est gris\nquand tout porte \x85\ncroire que les choses\nne pourraient pas\n\x88tre plus parfaites.\nJe suis un athl\x8Ate"));
		break;
	case 84:
		arduboy.print(F("que l'entrainement\naurait tant us\x82 qu'il\narriverait K.O. sur\nla ligne de d\x82part.\nLa magie d'hier est\ndevenue la r\x82""alit\x82\nd\x82""cevante et on\x82reuse\nd'aujourd'hui. Des"));
		break;
	case 85:
		arduboy.print(F("gens travaillent \x85 la\nd\x82valorisation du\nmonde. Je vois les\nr\x88ves de nos anc\x88-\ntres. Je vois d'im-\nmenses poubelles dans\nlesquelles ils\ns'entassent."));
		break;
	case 86:
		arduboy.print(F("Je voudrais dessiner\n\x85 la main, avec mon\npropre sang, ou bien\n\x82""crire quelques mots\ndans une autre dimen-\nsion, pour que cesse\nenfin cette douleur\naussi molle que"));
		break;
	case 87:
		arduboy.print(F("terrible.\nLes nuages sont d\x82so-\nl\x82s de pleuvoir, ils\nse savent d\x82test\x82s.\nIls font ce qu'ils\ndoivent et leur pro-\npri\x82taire murmure en-\ncore: \"Toute cette"));
		break;
	case 88:
		arduboy.print(F("exp\x82rience aura \x82t\x82\nun immense g\x83""chis.\""));
		break;					
	case 89:
		arduboy.setTextSize(2);
		arduboy.print(F("\n THANK YOU\n 4 PLAYING"));
		arduboy.setTextSize(1);
		arduboy.drawPixel(random(128), random(64), WHITE);
		arduboy.drawPixel(random(128), random(64), WHITE);
		arduboy.drawPixel(random(128), random(64), WHITE);
		break;
	}

	arduboy.display();

}

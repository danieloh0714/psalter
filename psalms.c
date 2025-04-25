#include "psalms.h"

#define ESC_RESET "\033[m"
#define ESC_ITALIC "\033[3m"

const char *psalms[150] = {
    // Psalm 1
    "[1] That man hath perfect blessedness,\nwho walketh not astray\nIn "
    "counsel of ungodly men,\nnor stands in sinners’ way,\n\nNor sitteth "
    "in the scorner’s chair:\n[2] But placeth his delight\nUpon God’s law, "
    "and meditates\non his law day and night.\n\n[3] He shall be like a "
    "tree that grows\nnear planted by a river,\nWhich in his season yields "
    "his fruit,\nand his leaf fadeth never:\n\nAnd all he doth shall "
    "prosper well\n[4] The wicked are not so;\nBut like they are unto the "
    "chaff,\nwhich wind drives to and fro.\n\n[5] In judgment therefore "
    "shall not stand\nsuch as ungodly are;\nNor in th’ assembly of the "
    "just\nshall wicked men appear.\n\n[6] For why? the way of godly "
    "men\nunto the Lord is known:\nWhereas the way of wicked men\nshall "
    "quite be overthrown.",
    // Psalm 2
    "[1] Why rage the heathen? and vain things\nwhy do the people "
    "mind?\n[2] Kings of the earth do set themselves,\nand princes are "
    "combin’d,\n\nTo plot against the Lord, and his\nAnointed, saying "
    "thus,\n[3] Let us asunder break their bands,\nand cast their cords "
    "from us.\n\n[4] He that in heaven sits shall laugh;\nthe Lord shall "
    "scorn them all.\n[5] Then shall he speak to them in wrath,\nin rage "
    "he vex them shall.\n\n[6] Yet, notwithstanding, I have him\nto be my "
    "King appointed;\nAnd over Sion, my holy hill,\nI have him King "
    "anointed.\n\n[7] The sure decree I will declare:\nThe Lord hath said "
    "to me,\nThou art mine only Son; this day\nI have begotten "
    "thee.\n\n[8] Ask of me, and for heritage\nthe heathen I’ll make "
    "thine;\nAnd, for possession, I to thee\nwill give earth’s utmost "
    "line.\n\n[9] Thou shalt, as with a weighty rod\nof iron, break them "
    "all;\nAnd, as a potter’s sherd, thou shalt\nthem dash in pieces "
    "small.\n\n[10] Now therefore, kings, be wise; be taught,\nye judges "
    "of the earth:\n[11] Serve God in fear, and see that ye\njoin "
    "trembling with your mirth.\n\n[12] Kiss ye the Son, lest in his "
    "ire\nye perish from the way,\nIf once his wrath begin to "
    "burn:\nbless’d all that on him stay.",
    // Psalm 3
    "[1] O Lord, how are my foes increas’d?\nagainst me many rise.\n[2] "
    "Many say of my soul, For him\nin God no succour lies.\n\n[3] Yet thou "
    "my shield and glory art,\nth’ uplifter of mine head.\n[4] I cry’d, "
    "and, from his holy hill,\nthe Lord me answer made.\n\n[5] I laid me "
    "down and slept; I wak’d;\nfor God sustained me.\n[6] I will not fear "
    "though thousands ten\nset round against me be.\n\n[7] Arise, O Lord; "
    "save me, my God;\nfor thou my foes hast stroke\nAll on the "
    "cheek-bone, and the teeth\nof wicked men hast broke.\n\n[8] Salvation "
    "doth appertain\nunto the Lord alone:\nThy blessing, Lord, for "
    "evermore\nthy people is upon.",
    // Psalm 4
    "[1] Give ear unto me when I call,\nGod of my righteousness:\nHave "
    "mercy, hear my pray’r; thou hast\nenlarg’d me in distress.\n\n[2] O "
    "ye the sons of men! how long\nwill ye love vanities?\nHow long my "
    "glory turn to shame,\nand will ye follow lies?\n\n[3] But know, that "
    "for himself the Lord\nthe godly man doth chuse:\nThe Lord, when I on "
    "him do call,\nto hear will not refuse.\n\n[4] Fear, and sin not; talk "
    "with your heart\non bed, and silent be.\n[5] Off ‘rings present of "
    "righteousness,\nand in the Lord trust ye.\n\n[6] O who will shew us "
    "any good?\nis that which many say:\nBut of thy countenance the "
    "light,\nLord, lift on us alway.\n\n[7] Upon my heart, bestow’d by "
    "thee,\nmore gladness I have found\nThan they, ev’n then, when corn "
    "and wine\ndid most with them abound.\n\n[8] I will both lay me down "
    "in peace,\nand quiet sleep will take;\nBecause thou only me to "
    "dwell\nin safety, Lord, dost make.",
    // Psalm 5
    "[1] Give ear unto my words, O Lord,\nmy meditation weigh.\n[2] Hear "
    "my loud cry, my King, my God;\nfor I to thee will pray.\n\n[3] Lord, "
    "thou shalt early hear my voice:\nI early will direct\nMy pray’r to "
    "thee; and, looking up,\nan answer will expect.\n\n[4] For thou art "
    "not a God that doth\nin wickedness delight;\nNeither shall evil dwell "
    "with thee,\n[5] Nor fools stand in thy sight.\n\nAll that ill-doers "
    "are thou hat’st;\n[6] Cutt’st off that liars be:\nThe bloody and "
    "deceitful man\nabhorred is by thee.\n\n[7] But I into thy house will "
    "come\nin thine abundant grace;\nAnd I will worship in thy "
    "fear\ntoward thy holy place.\n\n[8] Because of those mine "
    "enemies,\nLord, in thy righteousness\nDo thou me lead; do thou thy "
    "way\nmake straight before my face.\n\n[9] For in their mouth there is "
    "no truth,\ntheir inward part is ill;\nTheir throat’s an open "
    "sepulchre,\ntheir tongue doth flatter still.\n\n[10] O God, destroy "
    "them; let them be\nby their own counsel quell’d:\nThem for their many "
    "sins cast out,\nfor they ‘gainst thee rebell’d.\n\n[11] But let all "
    "joy that trust in thee,\nand still make shouting noise;\nFor them "
    "thou sav’st; let all that love\nthy name in thee rejoice.\n[12] For, "
    "Lord, unto the righteous man\nthou wilt thy blessing yield:\nWith "
    "favour thou wilt compass him\nabout, as with a shield.",
    // Psalm 6
    "[1] Lord, in thy wrath rebuke me not;\nNor in thy hot rage chasten "
    "me.\n[2] Lord, pity me, for I am weak:\nHeal me, for my bones vexed "
    "be.\n\n[3] My soul is also vexed sore;\nBut, Lord, how long stay wilt "
    "thou make?\n[4] Return, O Lord, my soul set free;\nO save me, for thy "
    "mercies’ sake.\n\n[5] Because those that deceased are\nOf thee shall "
    "no "
    "remembrance have;\nAnd who is he that will to thee\nGive praises "
    "lying "
    "in the grave?\n\n[6] I with my groaning weary am,\nI also all the "
    "night "
    "my bed\nHave caused for to swim; and I\nWith tears my couch have "
    "watered.\n\n[7] Mine eye, consum’d with grief, grows old,\nBecause of "
    "all mine enemies.\n[8] Hence from me, wicked workers all;\nFor God "
    "hath "
    "heard my weeping cries.\n\n[9] God hath my supplication heard,\nMy "
    "pray’r received graciously\n[10] Sham’d and sore vex’d be all my "
    "foes,\nSham’d and back turned suddenly.\n\nSecond Version "
    "(C.M.)\n\n[1] "
    "In thy great indignation,\nO Lord, rebuke me not;\nNor on me lay thy "
    "chast ‘ning hand,\nin thy displeasure hot.\n\n[2] Lord, I am weak, "
    "therefore on me\nhave mercy, and me spare:\nHeal me, O Lord, because "
    "thou know’st\nmy bones much vexed are.\n\n[3] My soul is vexed sore: "
    "but, Lord,\nhow long stay wilt thou make?\n[4] Return, Lord, free my "
    "soul; and save\nme, for thy mercies’ sake.\n\n[5] Because of thee in "
    "death there shall\nno more remembrance be:\nOf those that in the "
    "grave "
    "do lie,\nwho shall give thanks to thee?\n\n[6] I with my groaning "
    "weary "
    "am,\nand all the night my bed\nI caused for to swim; with tears\nmy "
    "couch I watered.\n\n[7] By reason of my vexing grief,\nmine eye "
    "consumed "
    "is;\nIt waxeth old, because of all\nthat be mine enemies.\n\n[8] But "
    "now, depart from me all ye\nthat work iniquity:\nFor why? the Lord "
    "hath "
    "heard my voice,\nwhen I did mourn and cry.\n\n[9] Unto my "
    "supplication\nthe Lord did hearing give:\nWhen I to him my prayer "
    "make,\nthe Lord will it receive.\n\n[10] Let all be sham’d and "
    "troubled "
    "sore,\nThat en’mies are to me;\nLet them turn back, and "
    "suddenly\nashamed let them be.",
    // Psalm 7
    "[1] O Lord my God, in thee do I\nmy confidence repose:\nSave and "
    "deliver me from all\nmy persecuting foes;\n\n[2] Lest that the enemy "
    "my soul\nshould, like a lion, tear,\nIn pieces rending it, while "
    "there\nis no deliverer.\n\n[3] O Lord my God, if it be so\nthat I "
    "committed this;\nIf it be so that in my hands\niniquity there "
    "is:\n\n[4] If I rewarded ill to him\nthat was at peace with "
    "me;\n(Yea, ev’n the man that without cause\nmy foe was I did "
    "free;)\n\n[5] Then let the foe pursue and take\nmy soul, and my life "
    "thrust\nDown to the earth, and let him lay\nmine honour in the "
    "dust.\n\n[6] Rise in thy wrath, Lord, raise thyself,\nfor my foes "
    "raging be;\nAnd, to the judgment which thou hast\ncommanded, wake for "
    "me.\n\n[7] So shall th’ assembly of thy folk\nabout encompass "
    "thee:\nThou, therefore, for their sakes, return\nunto thy place on "
    "high.\n\n[8] The Lord he shall the people judge:\nmy judge, Jehovah, "
    "be,\nAfter my righteousness, and mine\nintegrity in me.\n\n[9] O let "
    "the wicked’s malice end;\nbut stablish stedfastly\nThe righteous: for "
    "the righteous God\nthe hearts and reins doth try.\n\n[10] In God, who "
    "saves th’ upright in heart,\nis my defence and stay.\n[11] God just "
    "men judgeth, God is wroth\nwith ill men ev’ry day.\n\n[12] If he do "
    "not return again,\nthen he his sword will whet;\nHis bow he hath "
    "already bent,\nand hath it ready set:\n\n[13] He also hath for him "
    "prepar’d\nthe instruments of death;\nAgainst the persecutors he\nhis "
    "shafts ordained hath.\n\n[14] Behold, he with iniquity\ndoth travail, "
    "as in birth;\nA mischief he conceived hath,\nand falsehood shall "
    "bring forth.\n\n[15] He made a pit and digg’d it deep,\nanother there "
    "to take;\nBut he is fall’n into the ditch\nwhich he himself did "
    "make.\n\n[16] Upon his own head his mischief\nshall be returned "
    "home;\nHis vi’lent dealing also down\non his own pate shall "
    "come.\n\n[17] According to his righteousness\nthe Lord I’ll "
    "magnify;\nAnd will sing praise unto the name\nof God that is most "
    "high.",
    // Psalm 8
    "[1] How excellent in all the earth,\nLord, our Lord, is thy "
    "name!\nWho hast thy glory far advanc’d\nabove the starry "
    "frame.\n\n[2] From infants’ and from sucklings’ mouth\nthou didest "
    "strength ordain,\nFor thy foes’ cause, that so thou might’st\nth’ "
    "avenging foe restrain.\n\n[3] When I look up unto the heav’ns,\nwhich "
    "thine own fingers fram’d,\nUnto the moon, and to the stars,\nwhich "
    "were by thee ordain’d;\n\n[4] Then say I, What is man, that "
    "he\nremember’d is by thee?\nOr what the son of man, that thou\nso "
    "kind to him should’st be?\n\n[5] For thou a little lower hast\nhim "
    "than the angels made;\nWith glory and with dignity\nthou crowned hast "
    "his head.\n\n[6] Of thy hands’ works thou mad’st him lord,\nall "
    "under’s feet didst lay;\n[7] All sheep and oxen, yea, and "
    "beasts\nthat in the field do stray;\n\n[8] Fowls of the air, fish of "
    "the sea,\nall that pass through the same.\n[9] How excellent in all "
    "the earth,\nLord, our Lord, is thy name!",
    // Psalm 9
    "[1] Lord, thee I’ll praise with all my heart,\nthy wonders all "
    "proclaim.\n[2] In thee, most High, I’ll greatly joy,\nand sing unto "
    "thy name.\n\n[3] When back my foes were turn’d, they fell,\nand "
    "perish’d at thy sight:\n[4] For thou maintain’dst my right and "
    "cause;\non throne sat’st judging right.\n\n[5] The heathen thou "
    "rebuked hast,\nthe wicked overthrown;\nThou hast put out their names, "
    "that they\nmay never more be known.\n\n[6] O en’my! now destructions "
    "have\nan end perpetual:\nThou cities raz’d; perish’d with them\nis "
    "their memorial.\n\n[7] God shall endure for aye; he doth\nfor "
    "judgment set his throne;\n[8] In righteousness to judge the "
    "world,\njustice to give each one.\n\n[9] God also will a refuge "
    "be\nfor those that are oppress’d;\nA refuge will he be in times\nof "
    "trouble to distress’d.\n\n[10] And they that know thy name, in "
    "thee\ntheir confidence will place:\nFor thou hast not forsaken "
    "them\nthat truly seek thy face.\n\n[11] O sing ye praises to the "
    "Lord,\nthat dwells in Sion hill;\nAnd all the nations among\nhis "
    "deeds record ye still.\n\n[12] When he enquireth after blood,\nhe "
    "then rememb’reth them:\nThe humble folk he not forgets\nthat call "
    "upon his name.\n\n[13] Lord, pity me; behold the grief\nwhich I from "
    "foes sustain;\nEv’n thou, who from the gates of death\ndost raise me "
    "up again;\n\n[14] That I, in Sion’s daughters’ gates,\nmay all thy "
    "praise advance;\nAnd that I may rejoice always\nin thy "
    "deliverance.\n\n[15] The heathen are sunk in the pit\nwhich they "
    "themselves prepar’d;\nAnd in the net which they have hid\ntheir own "
    "feet fast are snar’d.\n\n[16] The Lord is by the judgment "
    "known\nwhich he himself hath wrought:\nThe sinners’ hands do make the "
    "snares\nwherewith themselves are caught.\n\n[17] They who are wicked "
    "into hell\neach one shall turned be;\nAnd all the nations that "
    "forget\nto seek the Lord most high.\n\n[18] For they that needy are "
    "shall not\nforgotten be alway;\nThe expectation of the poor\nshall "
    "not be lost for aye.\n\n[19] Arise, Lord, let not man prevail;\njudge "
    "heathen in thy sight:\n[20] That they may know themselves but "
    "men,\nthe nations, Lord, affright.",
    // Psalm 10
    "[1] Wherefore is it that thou, O Lord,\ndost stand from us afar?\nAnd "
    "wherefore hidest thou thyself,\nwhen times so troublous are?\n\n[2] "
    "The wicked in his loftiness\ndoth persecute the poor:\nIn these "
    "devices they have fram’d\nlet them be taken sure.\n\n[3] The wicked "
    "of his heart’s desire\ndoth talk with boasting great;\nHe blesseth "
    "him that’s covetous,\nwhom yet the Lord doth hate.\n\n[4] The wicked, "
    "through his pride of face,\non God he doth not call;\nAnd in the "
    "counsels of his heart\nthe Lord is not at all.\n\n[5] His ways they "
    "always grievous are;\nthy judgments from his sight\nRemoved are: at "
    "all his foes\nhe puffeth with despight.\n\n[6] Within his heart he "
    "thus hath said,\nI shall not moved be;\nAnd no adversity at "
    "all\nshall ever come to me.\n\n[7] His mouth with cursing, fraud, "
    "deceit,\nis fill’d abundantly;\nAnd underneath his tongue there "
    "is\nmischief and vanity.\n\n[8] He closely sits in villages;\nhe "
    "slays the innocent:\nAgainst the poor that pass him by\nhis cruel "
    "eyes are bent.\n\n[9] He, lion-like, lurks in his den;\nhe waits the "
    "poor to take;\nAnd when he draws him in his net,\nhis prey he doth "
    "him make.\n\n[10] Himself he humbleth very low,\nhe croucheth down "
    "withal,\nThat so a multitude of poor\nmay by his strong ones "
    "fall.\n\n[11] He thus hath said within his heart,\nThe Lord hath "
    "quite forgot;\nHe hides his countenance, and he\nfor ever sees it "
    "not.\n\n[12] O Lord, do thou arise; O God,\nlift up thine hand on "
    "high:\nPut not the meek afflicted ones\nout of thy memory.\n\n[13] "
    "Why is it that the wicked man\nthus doth the Lord despise?\nBecause "
    "that God will it require\nhe in his heart denies.\n\n[14] Thou hast "
    "it seen; for their mischief\nand spite thou wilt repay:\nThe poor "
    "commits himself to thee;\nthou art the orphan’s stay.\n\n[15] The arm "
    "break of the wicked man,\nand of the evil one;\nDo thou seek out his "
    "wickedness,\nuntil thou findest none.\n\n[16] The Lord is King "
    "through ages all,\nev’n to eternity;\nThe heathen people from his "
    "land\nare perish’d utterly.\n\n[17] O Lord, of those that humble "
    "are\nthou the desire didst hear;\nThou wilt prepare their heart, and "
    "thou\nto hear wilt bend thine ear;\n\n[18] To judge the fatherless, "
    "and those\nthat are oppressed sore;\nThat man, that is but sprung of "
    "earth,\nmay them oppress no more.",
    // Psalm 11
    "[1] I in the Lord do put my trust:\nhow is it then that ye\nSay to my "
    "soul, Flee, as a bird,\nunto your mountain high?\n\n[2] For, lo, the "
    "wicked bend their bow,\ntheir shafts on string they fit,\nThat those who "
    "upright are in heart\nthey privily may hit.\n\n[3] If the foundations be "
    "destroy’d,\nwhat hath the righteous done?\n[4] God in his holy temple "
    "is,\nin heaven is his throne:\n\nHis eyes do see, his eye-lids try\n[5] "
    "men’s sons. The just he proves:\nBut his soul hates the wicked man,\nand "
    "him that vi’lence loves.\n\n[6] Snares, fire and brimstone, furious "
    "storms,\non sinners he shall rain:\nThis, as the portion of their "
    "cup,\ndoth unto them pertain.\n\n[7] Because the Lord most righteous "
    "doth\nin righteousness delight;\nAnd with a pleasant "
    "countenance\nbeholdeth the upright.",
    // Psalm 12
    "[1] Help, Lord, because the godly man\ndoth daily fade away;\nAnd from "
    "among the sons of men\nthe faithful do decay.\n\n[2] Unto his neighbour "
    "ev’ry one\ndoth utter vanity:\nThey with a double heart do speak,\nand "
    "lips of flattery.\n\n[3] God shall cut off all flatt’ring lips,\ntongues "
    "that speak proudly thus,\n\n[4] We’ll with our tongue prevail, our "
    "lips\nare ours: who’s lord o’er us?\n\n[5] For poor oppress’d, and for "
    "the sighs\nof needy, rise will I,\nSaith God, and him in safety set\nfrom "
    "such as him defy.\n\n[6] The words of God are words most pure;\nthey be "
    "like silver try’d\nIn earthen furnace, seven times\nthat hath been "
    "purify’d.\n\n[7] Lord, thou shalt them preserve and keep\nfor ever from "
    "this race.\n[8] On each side walk the wicked, when\nvile men are high in "
    "place.",
    // Psalm 13
    "[1] How long wilt thou forget me, Lord?\nshall it for ever be?\nO how "
    "long shall it be that thou\nwilt hide thy face from me?\n\n[2] How long "
    "take counsel in my soul,\nstill sad in heart, shall I?\nHow long exalted "
    "over me\nshall be mine enemy?\n\n[3] O Lord my God, consider well,\nand "
    "answer to me make:\nMine eyes enlighten, lest the sleep\nof death me "
    "overtake:\n\n[4] Lest that mine enemy should say,\nAgainst him I "
    "prevail’d;\nAnd those that trouble me rejoice,\nwhen I am mov’d and "
    "fail’d.\n\n[5] But I have all my confidence\nthy mercy set upon;\nMy "
    "heart within me shall rejoice\nin thy salvation.\n\n[6] I will unto the "
    "Lord my God\nsing praises cheerfully,\nBecause he hath his bounty "
    "shown\nto me abundantly.",
    // Psalm 14
    "[1] That there is not a God, the fool\ndoth in his heart conclude:\nThey "
    "are corrupt, their works are vile;\nnot one of them doth good.\n\n[2] "
    "Upon men’s sons the Lord from heav’n\ndid cast his eyes abroad,\nTo see "
    "if any understood,\nand did seek after God.\n\n[3] They altogether filthy "
    "are,\nthey all aside are gone;\nAnd there is none that doeth good,\nyea, "
    "sure there is not one.\n\n[4] These workers of iniquity\ndo they not know "
    "at all,\nThat they my people eat as bread,\nand on God do not "
    "call?\n\n[5] There fear’d they much; for God is with\nthe whole race of "
    "the just.\n[6] You shame the counsel of the poor,\nbecause God is his "
    "trust.\n\n[7] Let Isr’el’s help from Sion come:\nwhen back the Lord shall "
    "bring\nHis captives, Jacob shall rejoice,\nand Israel shall sing.",
    // Psalm 15
    "[1] Within thy tabernacle, Lord,\nwho shall abide with thee?\nAnd in thy "
    "high and holy hill\nwho shall a dweller be?\n\n[2] The man that walketh "
    "uprightly,\nand worketh righteousness,\nAnd as he thinketh in his "
    "heart,\nso doth he truth express.\n\n[3] Who doth not slander with his "
    "tongue,\nnor to his friend doth hurt;\nNor yet against his neighbour "
    "doth\ntake up an ill report.\n\n[4] In whose eyes vile men are "
    "despis’d;\nbut those that God do fear\nHe honoureth; and changeth "
    "not,\nthough to his hurt he swear.\n\n[5] His coin puts not to "
    "usury,\nnor take reward will he\nAgainst the guiltless. Who doth "
    "thus\nshall never moved be.",
    // Psalm 16
    "[1] Lord, keep me; for I trust in thee.\n[2] To God thus was my "
    "speech,\nThou art my Lord; and unto thee\nmy goodness doth not "
    "reach:\n\n[3] To saints on earth, to th’ excellent,\nwhere my delight’s "
    "all plac’d.\n[4] Their sorrows shall be multiply’d\nto other gods that "
    "haste:\n\nOf their drink-offerings of blood\nI will no off ‘ring "
    "make;\nYea, neither I their very names\nup in my lips will take.\n\n[5] "
    "God is of mine inheritance\nand cup the portion;\nThe lot that fallen is "
    "to me\nthou dost maintain alone.\n\n[6] Unto me happily the lines\nin "
    "pleasant places fell;\nYea, the inheritance I got\nin beauty doth "
    "excel.\n\n[7] I bless the Lord, because he doth\nby counsel me "
    "conduct;\nAnd in the seasons of the night\nmy reins do me "
    "instruct.\n\n[8] Before me still the Lord I set:\nsith it is so that "
    "he\nDoth ever stand at my right hand,\nI shall not moved be.\n\n[9] "
    "Because of this my heart is glad,\nand joy shall be exprest\nEv’n by my "
    "glory; and my flesh\nin confidence shall rest.\n\n[10] Because my soul in "
    "grave to dwell\nshall not be left by thee;\nNor wilt thou give thine Holy "
    "One\ncorruption to see.\n\n[11] Thou wilt me shew the path of life:\nof "
    "joys there is full store\nBefore thy face; at thy right hand\nare "
    "pleasures evermore.",
    // Psalm 17
    "[1] Lord, hear the right, attend my cry,\nunto my pray’r give heed,\nThat "
    "doth not in hypocrisy\nfrom feigned lips proceed.\n\n[2] And from before "
    "thy presence forth\nmy sentence do thou send:\nToward these things that "
    "equal are\ndo thou thine eyes intend.\n\n[3] Thou prov’dst mine heart, "
    "thou visit’dst me\nby night, thou didst me try,\nYet nothing found’st; "
    "for that my mouth\nshall not sin, purpos’d I.\n\n[4] As for men’s works, "
    "I, by the word\nthat from thy lips doth flow,\nDid me preserve out of the "
    "paths\nwherein destroyers go.\n\n[5] Hold up my goings, Lord, me "
    "guide\nin those thy paths divine,\nSo that my footsteps may not "
    "slide\nout of those ways of thine.\n\n[6] I called have on thee, O "
    "God,\nbecause thou wilt me hear:\nThat thou may’st hearken to my "
    "speech,\nto me incline thine ear.\n\n[7] Thy wondrous loving-kindness "
    "show,\nthou that, by thy right hand,\nSav’st them that trust in thee from "
    "those\nthat up against them stand.\n\n[8] As th’ apple of the eye me "
    "keep;\nin thy wings shade me close\n[9] From lewd oppressors, "
    "compassing\nme round, as deadly foes.\n\n[10] In their own fat they are "
    "inclos’d;\ntheir mouth speaks loftily.\n[11] Our steps they compass’d; "
    "and to ground\ndown bowing set their eye.\n\n[12] He like unto a lion "
    "is\nthat’s greedy of his prey,\nOr lion young, which lurking doth\nin "
    "secret places stay.\n\n[13] Arise, and disappoint my foe,\nand cast him "
    "down, O Lord:\nMy soul save from the wicked man,\nthe man which is thy "
    "sword.\n\n[14] From men, which are thy hand, O Lord,\nfrom worldly men me "
    "save,\nWhich only in this present life\ntheir part and portion "
    "have.\n\nWhose belly with thy treasure hid\nthou fill’st: they children "
    "have\nIn plenty; of their goods the rest\nthey to their children "
    "leave.\n\n[15] But as for me, I thine own face\nin righteousness will "
    "see;\nAnd with thy likeness, when I wake,\nI satisfy’d shall be.",
    // Psalm 18
    "[1] Thee will I love, O Lord, my strength.\n[2] My fortress is the "
    "Lord,\nMy rock, and he that doth to me\ndeliverance afford:\n\nMy God, my "
    "strength, whom I will trust,\na buckler unto me,\nThe horn of my "
    "salvation,\nand my high tow’r, is he.\n\n[3] Upon the Lord, who worthy "
    "is\nof praises, will I cry;\nAnd then shall I preserved be\nsafe from "
    "mine enemy.\n\n[4] Floods of ill men affrighted me,\ndeath’s pangs about "
    "me went;\n[5] Hell’s sorrows me environed;\ndeath’s snares did me "
    "prevent.\n\n[6] In my distress I call’d on God,\ncry to my God did I;\nHe "
    "from his temple heard my voice,\nto his ears came my cry.\n\n[7] Th’ "
    "earth, as affrighted, then did shake,\ntrembling upon it seiz’d:\nThe "
    "hills’ foundations moved were,\nbecause he was displeas’d.\n\n[8] Up from "
    "his nostrils came a smoke,\nand from his mouth there came\nDevouring "
    "fire, and coals by it\nwere turned into flame.\n\n[9] He also bowed down "
    "the heav’ns,\nand thence he did descend;\nAnd thickest clouds of darkness "
    "did\nunder his feet attend.\n\n[10] And he upon a cherub rode,\nand "
    "thereon he did fly;\nYea, on the swift wings of the wind\nhis flight was "
    "from on high.\n\n[11] He darkness made his secret place:\nabout him, for "
    "his tent,\nDark waters were, and thickest clouds\nof th’ airy "
    "firmament.\n\n[12] And at the brightness of that light,\nwhich was before "
    "his eye,\nHis thick clouds pass’d away, hailstones\nand coals of fire did "
    "fly.\n\n[13] The Lord God also in the heav’ns\ndid thunder in his "
    "ire;\nAnd there the Highest gave his voice,\nhailstones and coals of "
    "fire.\n\n[14] Yea, he his arrows sent abroad,\nand them he "
    "scattered;\nHis lightnings also he shot out,\nand them "
    "discomfited.\n\n[15] The waters’ channels then were seen,\nthe world’s "
    "foundations vast\nAt thy rebuke discover’d were,\nand at thy nostrils’ "
    "blast.\n\n[16] And from above the Lord sent down,\nand took me from "
    "below;\nFrom many waters he me drew,\nwhich would me overflow.\n\n[17] He "
    "me reliev’d from my strong foes,\nand such as did me hate;\nBecause he "
    "saw that they for me\ntoo strong were, and too great.\n\n[18] They me "
    "prevented in the day\nof my calamity;\nBut even then the Lord himself\na "
    "stay was unto me.\n\n[19] He to a place where liberty\nand room was hath "
    "me brought;\nBecause he took delight in me,\nhe my deliv’rance "
    "wrought.\n\n[20] According to my righteousness\nhe did me recompense,\nHe "
    "me repaid according to\nmy hands’ pure innocence.\n\n[21] For I God’s "
    "ways kept, from my God\ndid not turn wickedly.\nHis judgments were before "
    "me, I\nhis laws put not from me.\n\n[23] Sincere before him was my "
    "heart;\nwith him upright was I;\nAnd watchfully I kept myself\nfrom mine "
    "iniquity.\n\n[24] After my righteousness the Lord\nhath recompensed "
    "me,\nAfter the cleanness of my hands\nappearing in his eye.\n\n[25] Thou "
    "gracious to the gracious art,\nto upright men upright:\n[26] Pure to the "
    "pure, froward thou kyth’st\nunto the froward wight.\n\n[27] For thou wilt "
    "the afflicted save\nin grief that low do lie:\nBut wilt bring down the "
    "countenance\nof them whose looks are high.\n\n[28] The Lord will light my "
    "candle so,\nthat it shall shine full bright:\nThe Lord my God will also "
    "make\nmy darkness to be light.\n\n[29] By thee through troops of men I "
    "break,\nand them discomfit all;\nAnd, by my God assisting me,\nI overleap "
    "a wall.\n\n[30] As for God, perfect is his way:\nthe Lord his word is "
    "try’d;\nHe is a buckler to all those\nwho do in him confide.\n\n[31] Who "
    "but the Lord is God? but he\nwho is a rock and stay?\n[32] ‘Tis God that "
    "girdeth me with strength,\nand perfect makes my way.\n\n[33] He made my "
    "feet swift as the hinds,\nset me on my high places.\n[34] Mine hands to "
    "war he taught, mine arms\nbrake bows of steel in pieces.\n\n[35] The "
    "shield of thy salvation\nthou didst on me bestow:\nThy right hand held me "
    "up, and great\nthy kindness made me grow.\n\n[36] And in my way my steps "
    "thou hast\nenlarged under me,\nThat I go safely, and my feet\nare kept "
    "from sliding free.\n\n[37] Mine en’mies I pursued have,\nand did them "
    "overtake;\nNor did I turn again till I\nan end of them did make.\n\n[38] "
    "I wounded them, they could not rise;\nthey at my feet did fall.\n[39] "
    "Thou girdedst me with strength for war;\nmy foes thou brought’st down "
    "all:\n\n[40] And thou hast giv’n to me the necks\nof all mine "
    "enemies;\nThat I might them destroy and slay,\nwho did against me "
    "rise.\n\n[41] They cried out, but there was none\nthat would or could "
    "them save;\nYea, they did cry unto the Lord,\nbut he no answer "
    "gave.\n\n[42] Then did I beat them small as dust\nbefore the wind that "
    "flies;\nAnd I did cast them out like dirt\nupon the street that "
    "lies.\n\n[43] Thou mad’st me free from people’s strife,\nand heathen’s "
    "head to be:\nA people whom I have not known\nshall service do to "
    "me.\n\n[44] At hearing they shall me obey,\nto me they shall "
    "submit.\n[45] Strangers for fear shall fade away,\nwho in close places "
    "sit.\n\n[46] God lives, bless’d be my Rock; the God\nof my health praised "
    "be.\n[47] God doth avenge me, and subdues\nthe people under me.\n\n[48] "
    "He saves me from mine enemies;\nyea, thou hast lifted me\nAbove my foes; "
    "and from the man\nof vi’lence set me free.\n\n[49] Therefore to thee will "
    "I give thanks\nthe heathen folk among;\nAnd to thy name, O Lord, I "
    "will\nsing praises in a song.\n\n[50] He great deliv’rance gives his "
    "king:\nhe mercy doth extend\nTo David, his anointed one,\nand his seed "
    "without end.",
    // Psalm 19
    "[1] The heav’ns God’s glory do declare,\nthe skies his hand-works "
    "preach:\n[2] Day utters speech to day, and night\nto night doth knowledge "
    "teach.\n\n[3] There is no speech nor tongue to which\ntheir voice doth "
    "not extend:\n[4] Their line is gone through all the earth,\ntheir words "
    "to the world’s end.\n\nIn them he set the sun a tent;\n[5] Who, "
    "bridegroom-like, forth goes\nFrom’s chamber, as a strong man doth\nto run "
    "his race rejoice.\n\n[6] From heav’n’s end is his going forth,\ncircling "
    "to th’ end again;\nAnd there is nothing from his heat\nthat hidden doth "
    "remain.\n\n[7] God’s law is perfect, and converts\nthe soul in sin that "
    "lies:\nGod’s testimony is most sure,\nand makes the simple wise.\n\n[8] "
    "The statutes of the Lord are right,\nand do rejoice the heart:\nThe "
    "Lord’s command is pure, and doth\nlight to the eyes impart.\n\n[9] "
    "Unspotted is the fear of God,\nand doth endure for ever:\nThe judgments "
    "of the Lord are true\nand righteous altogether.\n\n[10] They more than "
    "gold, yea, much fine gold,\nto be desired are:\nThan honey, honey from "
    "the comb\nthat droppeth, sweeter far.\n\n[11] Moreover, they thy servant "
    "warn\nhow he his life should frame:\nA great reward provided is\nfor them "
    "that keep the same.\n\n[12] Who can his errors understand?\nO cleanse "
    "thou me within\n[13] From secret faults. Thy servant keep\nfrom all "
    "presumptuous sin:\n\nAnd do not suffer them to have\ndominion over "
    "me:\nThen, righteous and innocent,\nI from much sin shall be.\n\n[14] The "
    "words which from my mouth proceed,\nthe thoughts sent from my "
    "heart,\nAccept, O Lord, for thou my strength\nand my Redeemer art.",
    // Psalm 20
    "[1] Jehovah hear thee in the day\nwhen trouble he doth send:\nAnd let the "
    "name of Jacob’s God\nthee from all ill defend.\n\n[2] O let him help send "
    "from above,\nout of his sanctuary:\nFrom Sion, his own holy hill,\nlet "
    "him give strength to thee.\n\n[3] Let him remember all thy gifts,\naccept "
    "thy sacrifice:\n[4] Grant thee thine heart’s wish, and fulfil\nthy "
    "thoughts and counsel wise.\n\n[5] In thy salvation we will joy;\nin our "
    "God’s name we will\nDisplay our banners: and the Lord\nthy prayers all "
    "fulfil.\n\n[6] Now know I God his king doth save:\nhe from his holy "
    "heav’n\nWill hear him, with the saving strength\nby his own right hand "
    "giv’n.\n\n[7] In chariots some put confidence,\nsome horses trust "
    "upon:\nBut we remember will the name\nof our Lord God alone.\n\n[8] We "
    "rise, and upright stand, when they\nare bowed down, and fall.\n[9] "
    "Deliver, Lord; and let the King\nus hear, when we do call.",
    // Psalm 21
    "[1] The king in thy great strength, O Lord,\nshall very joyful be:\nIn "
    "thy salvation rejoice\nhow veh’mently shall he!\n\n[2] Thou hast bestowed "
    "upon him\nall that his heart would have;\nAnd thou from him didst not "
    "withhold\nwhate’er his lips did crave.\n\n[3] For thou with blessings him "
    "prevent’st\nof goodness manifold;\nAnd thou hast set upon his head\na "
    "crown of purest gold.\n\n[4] When he desired life of thee,\nthou life to "
    "him didst give;\nEv’n such a length of days, that he\nfor evermore should "
    "live.\n\n[5] In that salvation wrought by thee\nhis glory is made "
    "great;\nHonour and comely majesty\nthou hast upon him set.\n\n[6] Because "
    "that thou for evermore\nmost blessed hast him made;\nAnd thou hast with "
    "thy countenance\nmade him exceeding glad.\n\n[7] Because the king upon "
    "the Lord\nhis confidence doth lay;\nAnd through the grace of the most "
    "High\nshall not be mov’d away.\n\n[8] Thine hand shall all those men find "
    "out\nthat en’mies are to thee;\nEv’n thy right hand shall find out "
    "those\nof thee that haters be.\n\n[9] Like fiery ov’n thou shalt them "
    "make,\nwhen kindled is thine ire;\nGod shall them swallow in his "
    "wrath,\ndevour them shall the fire.\n\n[10] Their fruit from earth thou "
    "shalt destroy,\ntheir seed men from among:\n[11] For they beyond their "
    "might ‘gainst thee\ndid plot mischief and wrong.\n\n[12] Thou therefore "
    "shalt make them turn back,\nwhen thou thy shafts shalt place\nUpon thy "
    "strings, made ready all\nto fly against their face.\n\n[13] In thy great "
    "pow’r and strength, O Lord,\nbe thou exalted high;\nSo shall we sing with "
    "joyful hearts,\nthy power praise shall we.",
    // Psalm 22
    "[1] My God, my God, why hast thou me\nforsaken? why so far\nArt thou from "
    "helping me, and from\nmy words that roaring are?\n\n[2] All day, my God, "
    "to thee I cry,\nyet am not heard by thee;\nAnd in the season of the "
    "night\nI cannot silent be.\n\n[3] But thou art holy, thou that "
    "dost\ninhabit Isr’el’s praise.\n[4] Our fathers hop’d in thee, they "
    "hop’d\nand thou didst them release.\n\n[5] When unto thee they sent their "
    "cry,\nto them deliv’rance came:\nBecause they put their trust in "
    "thee,\nthey were not put to shame.\n\n[6] But as for me, a worm I "
    "am,\nand as no man am priz’d:\nReproach of men I am, and by\nthe people "
    "am despis’d.\n\n[7] All that me see laugh me to scorn;\nshoot out the lip "
    "do they;\nThey nod and shake their heads at me,\nand, mocking, thus do "
    "say,\n\n[8] This man did trust in God, that he\nwould free him by his "
    "might:\nLet him deliver him, sith he\nhad in him such delight.\n\n[9] But "
    "thou art he out of the womb\nthat didst me safely take;\nWhen I was on my "
    "mother’s breasts\nthou me to hope didst make.\n\n[10] And I was cast upon "
    "thy care,\nev’n from the womb till now;\nAnd from my mother’s belly, "
    "Lord,\nmy God and guide art thou.\n\n[11] Be not far off, for grief is "
    "near,\nand none to help is found.\n[12] Bulls many compass me, strong "
    "bulls\nof Bashan me surround.\n\n[13] Their mouths they open’d wide on "
    "me,\nupon me gape did they,\nLike to a lion ravening\nand roaring for his "
    "prey.\n\n[14] Like water I’m pour’d out, my bones\nall out of joint do "
    "part:\nAmidst my bowels, as the wax,\nso melted is my heart.\n\n[15] My "
    "strength is like a potsherd dry’d;\nmy tongue it cleaveth fast\nUnto my "
    "jaws; and to the dust\nof death thou brought me hast.\n\n[16] For dogs "
    "have compass’d me about:\nthe wicked, that did meet\nIn their assembly, "
    "me inclos’d;\nthey pierc’d my hands and feet.\n\n[17] I all my bones may "
    "tell; they do\nupon me look and stare.\n[18] Upon my vesture lots they "
    "cast,\nand clothes among them share.\n\n[19] But be not far, O Lord, my "
    "strength;\nhaste to give help to me.\n[20] From sword my soul, from pow’r "
    "of dogs\nmy darling set thou free.\n\n[21] Out of the roaring lion’s "
    "mouth\ndo thou me shield and save:\nFor from the horns of unicorns\nan "
    "ear to me thou gave.\n\n[22] I will shew forth thy name unto\nthose that "
    "my brethren are;\nAmidst the congregation\nthy praise I will "
    "declare.\n\n[23] Praise ye the Lord, who do him fear;\nhim glorify all "
    "ye\nThe seed of Jacob: fear him all\nthat Isr’el’s children be.\n\n[24] "
    "For he despis’d not nor abhorr’d\nth’ afflicted’s misery;\nNor from him "
    "hid his face, but heard\nwhen he to him did cry.\n\n[25] Within the "
    "congregation great\nmy praise shall be of thee;\nMy vows before them that "
    "him fear\nshall be perform’d by me.\n\n[26] The meek shall eat, and shall "
    "be fill’d;\nthey also praise shall give\nUnto the Lord that do him "
    "seek:\nyour heart shall ever live.\n\n[27] All ends of th’ earth remember "
    "shall,\nand turn the Lord unto;\nAll kindreds of the nations\nto him "
    "shall homage do:\n\n[28] Because the kingdom to the Lord\ndoth appertain "
    "as his;\nLikewise among the nations\nthe Governor he is.\n\n[29] Earth’s "
    "fat ones eat, and worship shall:\nall who to dust descend\nShall bow to "
    "him; none of them can\nhis soul from death defend.\n\n[30] A seed shall "
    "service do to him;\nunto the Lord it shall\nBe for a generation\nreckon’d "
    "in ages all.\n\n[31] They shall come, and they shall declare\nhis truth "
    "and righteousness\nUnto a people yet unborn,\nand that he hath done this.",
    // Psalm 23
    "[1] The Lord’s my shepherd, I’ll not want.\n[2] He makes me down to "
    "lie\nIn pastures green: he leadeth me\nthe quiet waters by.\n\n[3] My "
    "soul he doth restore again;\nand me to walk doth make\nWithin the paths "
    "of righteousness,\nev’n for his own name’s sake.\n\n[4] Yea, though I "
    "walk in death’s dark vale,\nyet will I fear none ill:\nFor thou art with "
    "me; and thy rod\nand staff me comfort still.\n\n[5] My table thou hast "
    "furnished\nin presence of my foes;\nMy head thou dost with oil "
    "anoint,\nand my cup overflows.\n\n[6] Goodness and mercy all my "
    "life\nshall surely follow me:\nAnd in God’s house for evermore\nmy "
    "dwelling-place shall be.",
    // Psalm 24
    "[1] The earth belongs unto the Lord,\nand all that it contains;\nThe "
    "world that is inhabited,\nand all that there remains.\n\n[2] For the "
    "foundations thereof\nhe on the seas did lay,\nAnd he hath it "
    "established\nupon the floods to stay.\n\n[3] Who is the man that shall "
    "ascend\ninto the hill of God?\nOr who within his holy place\nshall have a "
    "firm abode?\n\n[4] Whose hands are clean, whose heart is pure,\nand unto "
    "vanity\nWho hath not lifted up his soul,\nnor sworn deceitfully.\n\n[5] "
    "He from th’ Eternal shall receive\nthe blessing him upon,\nAnd "
    "righteousness, ev’n from the God\nof his salvation.\n\n[6] This is the "
    "generation\nthat after him enquire,\nO Jacob, who do seek thy face\nwith "
    "their whole heart’s desire.\n\n[7] Ye gates, lift up your heads on "
    "high;\nye doors that last for aye,\nBe lifted up, that so the King\nof "
    "glory enter may.\n\n[8] But who of glory is the King?\nThe mighty Lord is "
    "this;\nEv’n that same Lord, that great in might\nand strong in battle "
    "is.\n\n[9] Ye gates, lift up your heads; ye doors,\ndoors that do last "
    "for aye,\nBe lifted up, that so the King\nof glory enter may.\n\n[10] But "
    "who is he that is the King\nof glory? who is this?\nThe Lord of hosts, "
    "and none but he,\nthe King of glory is.",
    // Psalm 25
    "First Version (S.M.)\n[1]To thee I lift my soul:\n[2] O Lord, I trust in "
    "thee:\nMy God, let me not be asham’d,\nnor foes triumph o’er me.\n\n[3] "
    "Let none that wait on thee\nbe put to shame at all;\nBut those that "
    "without cause transgress,\nlet shame upon them fall.\n\n[4] Shew me thy "
    "ways, O Lord;\nthy paths, O teach thou me:\n[5] And do thou lead me in "
    "thy truth,\ntherein my teacher be:\n\nFor thou art God that dost\nto me "
    "salvation send,\nAnd I upon thee all the day\nexpecting do attend.\n\n[6] "
    "Thy tender mercies, Lord,\nI pray thee to remember,\nAnd "
    "loving-kindnesses; for they\nhave been of old for ever.\n\n[7] My sins "
    "and faults of youth\ndo thou, O Lord, forget:\nAfter thy mercy think on "
    "me,\nand for thy goodness great.\n\n[8] God good and upright is:\nthe way "
    "he’ll sinners show.\n[9] The meek in judgment he will guide,\nand make "
    "his path to know.\n\n[10] The whole paths of the Lord\nare truth and "
    "mercy sure,\nTo those that do his cov’nant keep,\nand testimonies "
    "pure.\n\n[11] Now, for thine own name’s sake,\nO Lord, I thee entreat\nTo "
    "pardon mine iniquity;\nfor it is very great.\n\n[12] What man is he that "
    "fears\nthe Lord, and doth him serve?\nHim shall he teach the way that "
    "he\nshall choose, and still observe.\n\n[13] His soul shall dwell at "
    "ease;\nand his posterity\nShall flourish still, and of the "
    "earth\ninheritors shall be.\n\n[14] With those that fear him is\nthe "
    "secret of the Lord;\nThe knowledge of his covenant\nhe will to them "
    "afford.\n\n[15] Mine eyes upon the Lord\ncontinually are set:\nFor he it "
    "is that shall bring forth\nmy feet out of the net.\n\n[16] Turn unto me "
    "thy face,\nand to me mercy show;\nBecause that I am desolate,\nand am "
    "brought very low.\n\n[17] My heart’s griefs are increas’d:\nme from "
    "distress relieve.\n[18] See mine affliction and my pain,\nand all my sins "
    "forgive.\n\n[19] Consider thou my foes,\nbecause they many are;\nAnd it a "
    "cruel hatred is\nwhich they against me bear.\n\n[20] O do thou keep my "
    "soul,\ndo thou deliver me:\nAnd let me never be asham’d,\nbecause I trust "
    "in thee.\n\n[21] Let uprightness and truth\nkeep me, who thee "
    "attend.\n[22] Redemption, Lord, to Israel\nfrom all his troubles "
    "send.\n\n--------------------\n\nSecond Version (C.M.)\n[1] To thee I "
    "lift my soul, O Lord:\n[2] My God, I trust in thee:\nLet me not be "
    "asham’d; let not\nmy foes triumph o’er me.\n\n[3] Yea, let thou none "
    "ashamed be\nthat do on thee attend:\nAshamed let them be, O Lord,\nwho "
    "without cause offend.\n\n[4] Thy ways, Lord, shew; teach me thy "
    "paths:\n[5] Lead me in truth, teach me:\nFor of my safety thou art "
    "God;\nall day I wait on thee.\n\n[6] Thy mercies, that most tender "
    "are,\ndo thou, O Lord, remember,\nAnd loving-kindnesses; for they\nhave "
    "been of old for ever.\n\n[7] Let not the errors of my youth,\nnor sins, "
    "remember’d be:\nIn mercy, for thy goodness’ sake,\nO Lord, remember "
    "me.\n\n[8] The Lord is good and gracious,\nhe upright is also:\nHe "
    "therefore sinners will instruct\nin ways that they should go.\n\n[9] The "
    "meek and lowly he will guide\nin judgment just alway:\nTo meek and poor "
    "afflicted ones\nhe’ll clearly teach his way.\n\n[10] The whole paths of "
    "the Lord our God\nare truth and mercy sure,\nTo such as keep his "
    "covenant,\nand testimonies pure.\n\n[11] Now, for thine own name’s sake, "
    "O Lord,\nI humbly thee entreat\nTo pardon mine iniquity;\nfor it is very "
    "great.\n\n[12] What man fears God? him shall he teach\nthe way that he "
    "shall chuse.\n[13] His soul shall dwell at ease; his seed\nthe earth, as "
    "heirs, shall use.\n\n[14] The secret of the Lord is with\nsuch as do fear "
    "his name;\nAnd he his holy covenant\nwill manifest to them.\n\n[15] "
    "Towards the Lord my waiting eyes\ncontinually are set;\nFor he it is that "
    "shall bring forth\nmy feet out of the net.\n\n[16] O turn thee unto me, O "
    "God,\nhave mercy me upon;\nBecause I solitary am,\nand in "
    "affliction.\n\n[17] Enlarg’d the griefs are of mine heart;\nme from "
    "distress relieve.\n[18] See mine affliction and my pain,\nand all my sins "
    "forgive.\n\n[19] Consider thou mine enemies,\nbecause they many are;\nAnd "
    "it a cruel hatred is\nwhich they against me bear.\n\n[20] O do thou keep "
    "my soul; O God,\ndo thou deliver me:\nLet me not be asham’d; for I\ndo "
    "put my trust in thee.\n\n[21] O let integrity and truth\nkeep me, who "
    "thee attend.\n[22] Redemption, Lord, to Israel\nfrom all his troubles "
    "send.",
    // Psalm 26
    "[1] Judge me, O Lord, for I have walk’d\nin mine integrity:\nI trusted "
    "also in the Lord;\nslide therefore shall not I.\n\n[2] Examine me, and do "
    "me prove;\ntry heart and reins, O God:\n[3] For thy love is before mine "
    "eyes,\nthy truth’s paths I have trode.\n\n[4] With persons vain I have "
    "not sat,\nnor with dissemblers gone:\n[5] Th’ assembly of ill men I "
    "hate;\nto sit with such I shun.\n\n[6] Mine hands in innocence, O "
    "Lord,\nI’ll wash and purify;\nSo to thine holy altar go,\nand compass it "
    "will I:\n\n[7] That I, with voice of thanksgiving,\nmay publish and "
    "declare,\nAnd tell of all thy mighty works,\nthat great and wondrous "
    "are.\n\n[8] The habitation of thy house,\nLord, I have loved well;\nYea, "
    "in that place I do delight\nwhere doth thine honour dwell.\n\n[9] With "
    "sinners gather not my soul,\nand such as blood would spill:\n[10] Whose "
    "hands mischievous plots, right hand\ncorrupting bribes do fill.\n\n[11] "
    "But as for me, I will walk on\nin mine integrity:\nDo thou redeem me, "
    "and, O Lord,\nbe merciful to me.\n\n[12] My foot upon an even place\ndoth "
    "stand with stedfastness:\nWithin the congregations\nth’ Eternal I will "
    "bless.",
    // Psalm 27
    "[1] The Lord’s my light and saving health,\nwho shall make me "
    "dismayed?\nMy life’s strength is the Lord, of whom\nthen shall I be "
    "afraid?\n\n[2] When as mine enemies and foes,\nmost wicked persons "
    "all,\nTo eat my flesh against me rose,\nthey stumbled and did "
    "fall.\n\n[3] Against me though an host encamp,\nmy heart yet fearless "
    "is:\nThough war against me rise, I will\nbe confident in this.\n\n[4] One "
    "thing I of the Lord desired,\nand will seek to obtain,\nThat all days of "
    "my life I may\nwithin God’s house remain;\n\nThat I the beauty of the "
    "Lord\nbehold may and admire,\nAnd that I in his holy place\nmay "
    "rev’rently enquire.\n\n[5] For he in his pavilion shall\nme hide in evil "
    "days;\nIn secret of his tent me hide,\nand on a rock me raise.\n\n[6] And "
    "now, ev’n at this present time,\nmine head shall lifted be\nAbove all "
    "those that are my foes,\nand round encompass me:\n\nTherefore unto his "
    "tabernacle\nI’ll sacrifices bring\nOf joyfulness; I’ll sing, yea, I\nto "
    "God will praises sing.\n\n[7] O Lord, give ear unto my voice,\nwhen I do "
    "cry to thee;\nUpon me also mercy have,\nand do thou answer me.\n\n[8] "
    "When thou didst say, seek ye my face,\nthen unto thee reply\nThus did my "
    "heart, above all things\nthy face, Lord, seek will I.\n\n[9] Far from me "
    "hide not thou thy face;\nput not away from thee\nThy servant in thy "
    "wrath: thou hast\nan helper been to me.\n\nO God of my salvation,\nleave "
    "me not, nor forsake:\n[10] Though me my parents both should leave,\nthe "
    "Lord will me up take.\n\n[11] O Lord, instruct me in thy way,\nto me a "
    "leader be\nIn a plain path, because of those\nthat hatred bear to "
    "me.\n\n[12] Give me not to mine en’mies’ will;\nfor witnesses that "
    "lie\nAgainst me risen are, and such\nas breathe out cruelty.\n\n[13] I "
    "fainted had, unless that I\nbelieved had to see\nThe Lord’s own goodness "
    "in the land\nof them that living be.\n\n[14] Wait on the Lord, and be "
    "thou strong,\nand he shall strength afford\nUnto thine heart; yea, do "
    "thou wait,\nI say, upon the Lord.",
    // Psalm 28
    "[1] To thee I’ll cry, O Lord, my rock;\nhold not thy peace to me;\nLest "
    "like those that to pit descend\nI by thy silence be.\n\n[2] The voice "
    "hear of my humble pray’rs,\nwhen unto thee I cry;\nWhen to thine holy "
    "oracle\nI lift mine hands on high.\n\n[3] With ill men draw me not "
    "away\nthat work iniquity;\nThat speak peace to their friends, while "
    "in\ntheir hearts doth mischief lie.\n\n[4] Give them according to their "
    "deeds\nand ills endeavored:\nAnd as their handy-works deserve,\nto them "
    "be rendered.\n\n[5] God shall not build, but them destroy,\nwho would not "
    "understand\nThe Lord’s own works, nor did regard\nthe doing of his "
    "hand.\n\n[6] For ever blessed be the Lord,\nfor graciously he heard\nThe "
    "voice of my petitions,\nand prayers did regard.\n\n[7] The Lord’s my "
    "strength and shield; my heart\nupon him did rely;\nAnd I am helped: hence "
    "my heart\ndoth joy exceedingly,\n\nAnd with my song I will him "
    "praise.\n[8] My strength is God alone:\nHe also is the saving "
    "strength\nof his anointed one.\n\n[9] O thine own people do thou "
    "save,\nbless thine inheritance;\nThem also do thou feed, and them\nfor "
    "evermore advance.",
    // Psalm 29
    "[1] Give ye unto the Lord, ye sons\nthat of the mighty be,\nAll strength "
    "and glory to the Lord\nwith cheerfulness give ye.\n\n[2] Unto the Lord "
    "the glory give\nthat to his name is due;\nAnd in the beauty of "
    "holiness\nunto Jehovah bow.\n\n[3] The Lord’s voice on the waters "
    "is;\nthe God of majesty\nDoth thunder, and on multitudes\nof waters "
    "sitteth he.\n\n[4] A pow’rful voice it is that comes\nout from the Lord "
    "most high;\nThe voice of that great Lord is full\nof glorious "
    "majesty.\n\n[5] The voice of the Eternal doth\nasunder cedars tear;\nYea, "
    "God the Lord doth cedars break\nthat Lebanon doth bear.\n\n[6] He makes "
    "them like a calf to skip,\nev’n that great Lebanon,\nAnd, like to a young "
    "unicorn,\nthe mountain Sirion.\n\n[7] God’s voice divides the flames of "
    "fire;\n[8] The desert it doth shake:\nThe Lord doth make the "
    "wilderness\nof Kadesh all to quake.\n\n[9] God’s voice doth make the "
    "hinds to calve,\nit makes the forest bare:\nAnd in his temple ev’ry "
    "one\nhis glory doth declare.\n\n[10] The Lord sits on the floods; the "
    "Lord\nsits King, and ever shall.\n[11] The Lord will give his people "
    "strength,\nand with peace bless them all.",
    // Psalm 30
    "[1] Lord, I will thee extol, for thou\nhast lifted me on high,\nAnd over "
    "me thou to rejoice\nmad’st not mine enemy.\n\n[2] O thou who art the Lord "
    "my God,\nI in distress to thee,\nWith loud cries lifted up my voice,\nand "
    "thou hast healed me.\n\n[3] O Lord, my soul thou hast brought up,\nand "
    "rescued from the grave;\nThat I to pit should not go down,\nalive thou "
    "didst me save.\n\n[4] O ye that are his holy ones,\nsing praise unto the "
    "Lord;\nAnd give unto him thanks, when ye\nhis holiness record.\n\n[5] For "
    "but a moment lasts his wrath;\nlife in his favor lies:\nWeeping may for a "
    "night endure,\nat morn doth joy arise.\n\n[6] In my prosperity I "
    "said,\nthat nothing shall me move.\n[7] O Lord, thou hast my mountain "
    "made\nto stand strong by thy love:\n\nBut when that thou, O gracious "
    "God,\ndidst hide thy face from me,\nThen quickly was my prosp’rous "
    "state\nturned into misery.\n\n[8] Wherefore unto the Lord my cry\nI "
    "caused to ascend:\nMy humble supplication\nI to the Lord did send.\n\n[9] "
    "What profit is there in my blood,\nwhen I go down to pit?\nShall unto "
    "thee the dust give praise?\nthy truth declare shall it?\n\n[10] Hear, "
    "Lord, have mercy; help me, Lord:\n[11] Thou turned hast my sadness\nTo "
    "dancing; yea, my sackcloth loosed,\nand girded me with gladness;\n\n[12] "
    "That sing thy praise my glory may,\nand never silent be.\nO Lord my God, "
    "for evermore\nI will give thanks to thee.",
    // Psalm 31
    "[1] In thee, O Lord, I put my trust,\nshamed let me never be;\nAccording "
    "to thy righteousness\ndo thou deliver me.\n\n[2] Bow down thine ear to "
    "me, with speed\nsend me deliverance:\nTo save me, my strong rock be "
    "thou,\nand my house of defense.\n\n[3] Because thou art my rock, and "
    "thee\nI for my fortress take;\nTherefore do thou me lead and guide,\nev’n "
    "for thine own name’s sake.\n\n[4] And since thou art my strength, "
    "therefore\npull me out of the net,\nWhich they in subtlety for me\nso "
    "privily have set.\n\n[5] Into thine hands I do commit\nmy sp’rit: for "
    "thou art he,\nO thou, Jehovah, God of truth,\nthat hast redeemed "
    "me.\n\n[6] Those that do lying vanities\nregard, I have abhorred:\nBut as "
    "for me, my confidence\nis fixed on the Lord.\n\n[7] I’ll in thy mercy "
    "gladly joy:\nfor thou my miseries\nConsidered hast; thou hast my "
    "soul\nknown in adversities:\n\n[8] And thou hast not enclosed me\nwithin "
    "the en’my’s hand;\nAnd by thee have my feet been made\nin a large room to "
    "stand.\n\n[9] O Lord, upon me mercy have,\nfor trouble is on me:\nMine "
    "eye, my belly, and my soul,\nwith grief consumed be.\n\n[10] Because my "
    "life with grief is spent,\nmy years with sighs and groans:\nMy strength "
    "doth fail; and for my sin\nconsumed are my bones.\n\n[11] I was a scorn "
    "to all my foes,\nand to my friends a fear;\nAnd specially reproached of "
    "those\nthat were my neighbors near:\n\nWhen they me saw they from me "
    "fled.\n[12] Ev’n so I am forgot,\nAs men are out of mind when dead:\nI’m "
    "like a broken pot.\n\n[13] For slanders I of many heard;\nfear compassed "
    "me, while they\nAgainst me did consult, and plot\nto take my life "
    "away.\n\n[14] But as for me, O Lord, my trust\nupon thee I did lay;\nAnd "
    "I to thee, Thou art my God,\ndid confidently say.\n\n[15] My times are "
    "wholly in thine hand:\ndo thou deliver me\nFrom their hands that mine "
    "enemies\nand persecutors be.\n\n[16] Thy countenance to shine do "
    "thou\nupon thy servant make:\nUnto me give salvation,\nfor thy great "
    "mercies’ sake.\n\n[17] Let me not be ashamed, O Lord,\nfor on thee called "
    "I have:\nLet wicked men be shamed, let them\nbe silent in the "
    "grave.\n\n[18] To silence put the lying lips,\nthat grievous things do "
    "say,\nAnd hard reports, in pride and scorn,\non righteous men do "
    "lay.\n\n[19] How great’s the goodness thou for them\nthat fear thee "
    "keep’st in store,\nAnd wrought’st for them that trust in thee\nthe sons "
    "of men before!\n\n[20] In secret of thy presence thou\nshalt hide them "
    "from man’s pride:\nFrom strife of tongues thou closely shalt,\nas in a "
    "tent, them hide.\n\n[21] All praise and thanks be to the Lord;\nfor he "
    "hath magnified\nHis wondrous love to me within\na city fortified.\n\n[22] "
    "For from thine eyes cut off I am,\nI in my haste had said;\nMy voice yet "
    "heard’st thou, when to thee\nwith cries my moan I made.\n\n[23] O love "
    "the Lord, all ye his saints;\nbecause the Lord doth guard\nThe faithful, "
    "and he plenteously\nproud doers doth reward.\n\n[24] Be of good courage, "
    "and He strength\nunto your heart shall send,\nAll ye whose hope and "
    "confidence\ndoth on the Lord depend.",
    // Psalm 32
    "",
    // Psalm 33
    "",
    // Psalm 34
    "",
    // Psalm 35
    "",
    // Psalm 36
    "",
    // Psalm 37
    "",
    // Psalm 38
    "",
    // Psalm 39
    "",
    // Psalm 40
    "",
    // Psalm 41
    "",
    // Psalm 42
    "",
    // Psalm 43
    "",
    // Psalm 44
    "",
    // Psalm 45
    "",
    // Psalm 46
    "",
    // Psalm 47
    "",
    // Psalm 48
    "",
    // Psalm 49
    "",
    // Psalm 50
    "",
    // Psalm 51
    "",
    // Psalm 52
    "",
    // Psalm 53
    "",
    // Psalm 54
    "",
    // Psalm 55
    "",
    // Psalm 56
    "",
    // Psalm 57
    "",
    // Psalm 58
    "",
    // Psalm 59
    "",
    // Psalm 60
    "",
    // Psalm 61
    "",
    // Psalm 62
    "",
    // Psalm 63
    "",
    // Psalm 64
    "",
    // Psalm 65
    "",
    // Psalm 66
    "",
    // Psalm 67
    "",
    // Psalm 68
    "",
    // Psalm 69
    "",
    // Psalm 70
    "",
    // Psalm 71
    "",
    // Psalm 72
    "",
    // Psalm 73
    "",
    // Psalm 74
    "",
    // Psalm 75
    "",
    // Psalm 76
    "",
    // Psalm 77
    "",
    // Psalm 78
    "",
    // Psalm 79
    "",
    // Psalm 80
    "",
    // Psalm 81
    "",
    // Psalm 82
    "",
    // Psalm 83
    "",
    // Psalm 84
    "",
    // Psalm 85
    "",
    // Psalm 86
    "",
    // Psalm 87
    "",
    // Psalm 88
    "",
    // Psalm 89
    "",
    // Psalm 90
    "",
    // Psalm 91
    "",
    // Psalm 92
    "",
    // Psalm 93
    "",
    // Psalm 94
    "",
    // Psalm 95
    "",
    // Psalm 96
    "",
    // Psalm 97
    "",
    // Psalm 98
    "",
    // Psalm 99
    "",
    // Psalm 100
    "",
    // Psalm 101
    "",
    // Psalm 102
    "",
    // Psalm 103
    "",
    // Psalm 104
    "",
    // Psalm 105
    "",
    // Psalm 106
    "",
    // Psalm 107
    "",
    // Psalm 108
    "",
    // Psalm 109
    "",
    // Psalm 110
    "",
    // Psalm 111
    "",
    // Psalm 112
    "",
    // Psalm 113
    "",
    // Psalm 114
    "",
    // Psalm 115
    "",
    // Psalm 116
    "",
    // Psalm 117
    "",
    // Psalm 118
    "",
    // Psalm 119
    "",
    // Psalm 120
    "",
    // Psalm 121
    "",
    // Psalm 122
    "",
    // Psalm 123
    "",
    // Psalm 124
    "",
    // Psalm 125
    "",
    // Psalm 126
    "",
    // Psalm 127
    "",
    // Psalm 128
    "",
    // Psalm 129
    "",
    // Psalm 130
    "",
    // Psalm 131
    "",
    // Psalm 132
    "",
    // Psalm 133
    "",
    // Psalm 134
    "",
    // Psalm 135
    "",
    // Psalm 136
    "",
    // Psalm 137
    "",
    // Psalm 138
    "",
    // Psalm 139
    "",
    // Psalm 140
    "",
    // Psalm 141
    "",
    // Psalm 142
    "",
    // Psalm 143
    "",
    // Psalm 144
    "",
    // Psalm 145
    "",
    // Psalm 146
    "",
    // Psalm 147
    "",
    // Psalm 148
    "",
    // Psalm 149
    "",
    // Psalm 150
    "",
};

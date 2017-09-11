#include <vector>
#include <string>
#include <random>

const std::string _river_first_names[] = {"Alligator","Amazon","Arching","Arctic","Arrowhead","Bamboo","Black","Bland","Blue","Bogbeast","Boundless","Brilliant","Bursting","Calm","Charmed","Choral","Climbing","Cobalt","Cold","Coral","Crocodile","Crystal","Cursed","Dancing","Dark","Darkest","Dead","Deep","Distant","Dragonfly","Dread","Dreaded","Eastern","Emerald","Empty","Enchanted","Ethereal","Ever Reaching","Fair","Flowing","Foaming","Forbidden","Frothy","Frozen","Glassy","Gleaming","Glistening","Gray","Green","Harmony","Heaving","Homeless","Hungry","Infernal","Infinite","Invisible","Iris","Isolated","Jade","Laughing","Lifeless","Lilypad","Lion's Tail","Living","Lonely","Lotus","Lucent","Majestic","Mesmerizing","Mighty","Mirrored","Misty","Moaning","Molten","Moon-lit","Motionless","Moving","Narrow","New","Northern","Peaceful","Perfumed","Pleasant","Quiet","Raging","Rainy","Red","Restless","Rippling","Rocking","Rolling","Rough","Rushing","Sandy","Sanguine","Savage","Serene","Serpent","Shimmering","Silent","Sleeping","Slumbrous","Soundless","Southern","Sparkling","Sterile","Stern","Straitened","Sunny","Surging","Tadpole","Teal","Throbbing","Thundering","Tinted","Tortoise","Tossing","Tranquil","Treacherous","Troubled","Turbulent","Turquoise","Turtle","Uncanny","Unknown","Violent","Waveless","Western","Whispering","White","Wild","Windy","Wondering","Wrinkled"};
const std::string _river_second_names[] = {"Creek","River","Stream","Brook","Run","Tributary","Beck","Rill"};

std::vector<std::string> river_first_names (_river_first_names, _river_first_names + sizeof(_river_first_names) / sizeof(_river_first_names[0]) );
std::vector<std::string> river_second_names (_river_second_names, _river_second_names + sizeof(_river_second_names) / sizeof(_river_second_names[0]) );

const std::string _island_first_names[] = {"Abysmal","Abyss","Adamantine","Albatros","Altar","Anchor","Ancient","Angry","Arching","Arctic","Arid","Asylum","Autumn","Bare","Barnacle","Barracuda","Barren","Black","Bland","Bleak","Blue","Boiling","Boisterous","Bone-Dry","Bottomless","Boundless","Brilliant","Bronze","Burned","Burning","Bursting","Calm","Calmest","Castaway","Charmed","Chasm","Cheering","Cheerless","Choral","Clam","Climbing","Clownfish","Cobalt","Cold","Collapsing","Colossal","Conquest","Coral","Crab","Crying","Crystal","Cunning","Cursed","Dancing","Dangerous","Dark","Darkest","Dead","Decayed","Decaying","Deep","Defeated","Dense","Depraved","Deserted","Desolate","Desolated","Diamond","Distant","Dolphin","Domination","Dominion","Dread","Dreaded","Dreadful","Dreary","Dry","Eastern","Ebony","Emerald","Empty","Enchanted","Enormous","Eroded","Ethereal","Ever Reaching","Everlasting","Fabled","Fair","Fall","Faraway","Farthest","Feared","Fearsome","Fiery","Flamingo","Flat","Floating","Flowing","Forbidden","Forested","Fountain","Fractured","Frightening","Frozen","Garden","Gargantuan","Ghost","Giant","Gigantic","Glassy","Gleaming","Glistening","Gloomy","Glowing","Gold","Golden","Grave","Gray","Green","Seagull","Grim","Gulf","Harmonious","Haunted","Heartless","Heaving","Hellish","Hissing","Hollow","Homeless","Hopeless","Hot","Howling","Huge","Humongous","Hungry","Immense","Infernal","Infinite","Invisible","Inviting","Iron","Isolated","Ivory","Jade","Jagged","Jellyfish","Killing","Lagoon","Laughing","Lifeless","Light","Lightest","Living","Lobster","Lonely","Lost","Lucent","Majestic","Malevolent","Malicious","Mammoth","Manta","Maroon","Mesmerizing","Mighty","Mirrored","Misty","Moaning","Molten","Monster","Monstrous","Moonlit","Mumbling","Mysterious","Naked","Narrow","Neglected","Neverending","New","Northern","Oasis","Octopus","Open","Oriental","Outcast","Oyster","Oyster Bay","Pain","Peaceful","Pearl","Pelican","Penguin","Perfume","Perfumed","Phantom","Piranha","Plain","Pleasant","Poseidon","Primeval","Pristine","Pufferfish","Pure","Quiet","Raging","Rain","Rainy","Ray","Red","Relentless","Remote","Renegade","Resort","Restless","Rippling","Roaring","Rocking","Rocky","Rolling","Rough","Rugged","Rushing","Sad","Sanctuary","Sanctum","Sandy","Sanguine","Savage","Scarlet","Scorching","Scuba","Seal","Seashell","Secret","Serene","Severed","Shadow","Shadowed","Shadowy","Shark","Sharktooth","Paradise","Skeleton","Seagrass","Heavenly","Shaking","Sharp-peaked","Shimmering","Shipwreck","Shouting","Shrimp","Shrine","Silent","Silver","Sleeping","Slumbering","Smoking","Snowy","Soundless","Southern","Spacious","Sparkling","Spring","Squid","Starfish","Steep","Sterile","Stern","Stingray","Storm","Storming","Stormy","Straitened","Summer","Sunny","Surging","Symmetrical","Teal","Temple","Terraced","Throbbing","Thundering","Tideless","Torpedo","Tossing","Towering","Tranquil","Treacherous","Triumphant","Tropic","Troubled","Turbulent","Turquoise","Turtle","Twisting","Ugly","Ultramarine","Uncanny","Unfathomed","Unknown","Unscaled","Unstable","Unwelcoming","Vast","Vanishing","Veiled","Vicious","Victory","Violent","Virgin","Voiceless","Volcanic","Walled","Walrus","Wasted","Wasteful","Wasting","Waterless","Waveless","Welcoming","Western","Whale","Whispering","White","Wild","Windless","Windy","Winter","Wintry","Withered","Wondering","Yearning","Yelling","Yellow"};
const std::string _island_second_names[] = {"Ait","Archipelago","Atoll","Cay","Chain","Enclave","Haven","Holm","Island","Islands","Isle","Isles","Islet","Key","Peninsula","Reef","Refuge","Skerry"};

std::vector<std::string> island_first_names (_island_first_names, _island_first_names + sizeof(_island_first_names) / sizeof(_island_first_names[0]) );
std::vector<std::string> island_second_names (_island_second_names, _island_second_names + sizeof(_island_second_names) / sizeof(_island_second_names[0]) );

const std::string _sea_first_names[] = {"Abysmal","Arching","Red","Black","White","Cursed","Frozen","Arctic","Barren","Billowy","Bland","Blue","Boiling","Boisterous","Bottomless","Boundless","Brilliant","Bursting","Calm","Calmest","Charmed","Cheerless","Choral","Circumfluous","Climbing","Cobalt","Cold","Coral","Crystal","Dancing","Dread","Dreaded","Dark","Darkest","Dead","Deep","Deepest","Delicious","Dense","Depraved","Distant","Eastern","Emerald","Empty","Enchanted","Ethereal","Ever Reaching","Fair","Farthest","Flat","Forbidden","Quiet","Flowing","Foaming","Frothy","Glassy","Gleaming","Glistening","Grave","Gray","Green","Harmonious","Heartless","Heaving","Homeless","Hungry","Infernal","Infinite","Invisible","Isolated","Jade","Laughing","Lifeless","Living","Lonely","Lucent","Majestic","Mesmerizing","Mighty","Misty","Moaning","Molten","Moon-lit","Motionless","Narrow","Neglected","Northern","Orient","Peaceful","Perfumed","Pleasant","Primeval","Raging","Rainy","Rippling","Rocking","Rolling","Rough","Rushing","Sandy","Sanguine","Savage","Serene","Shimmering","Shoaling","Shoreless","Sleeping","Slumbrous","Soundless","Southern","Spacious","Sparkling","Sterile","Stern","Straitened","Sunny","Surging","Teal","Terrestrial","Throbbing","Thundering","Tideless","Tinted","Tossing","Tranquil","Treacherous","Triumphant","Mirrored","Restless","Tropic","Troubled","Turbulent","Turquoise","Ugly","Ultramarine","Uncanny","Unfathomed","Unknown","Unresting","Unruffled","Unstable","Vast","Violent","Walled","Wasted","Wasteful","Wasting","Waveless","Western","Whelming","Whispering","Wild","Windy","Wondering","Wrinkled","Yearning"};
const std::string _sea_second_names[] = {"Abyss","Tides","Waves","Bay","Deep","Depths","Domain","Expanse","Gulf","Ocean","Sea","Waters"};;

std::vector<std::string> sea_first_names (_sea_first_names, _sea_first_names + sizeof(_sea_first_names) / sizeof(_sea_first_names[0]) );
std::vector<std::string> sea_second_names (_sea_second_names, _sea_second_names + sizeof(_sea_second_names) / sizeof(_sea_second_names[0]) );

template<typename Iter>
Iter select_randomly(Iter start, Iter end, int s) {
  std::mt19937 gen(s);
  std::uniform_int_distribution<> dis(0, std::distance(start, end) - 1);
  std::advance(start, dis(gen));
  return start;
}

std::string generateRiverName() {
  std::string fn = *select_randomly(river_first_names.begin(), river_first_names.end(), std::clock());
  std::string sn = *select_randomly(river_second_names.begin(), river_second_names.end(), std::clock());
  return fn+" "+sn;
}

std::string generateLandName() {
  return *select_randomly(island_first_names.begin(), island_first_names.end(), std::clock()) + " " + *select_randomly(island_second_names.begin(), island_second_names.end(), std::clock());
  }

std::string generateSeaName() {
  return *select_randomly(sea_first_names.begin(), sea_first_names.end(), std::clock()) + " " + *select_randomly(sea_second_names.begin(), sea_second_names.end(), std::clock());
}

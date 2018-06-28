print "Welcome to the Pig Latin Translator!\n"

original = raw_input("Enter a word: ")

if len(original) > 0 and original.isalpha():
	word = original.lower()
	new_word = word[1:len(word)] + word[0] + 'ay'
	print '\n' + new_word
else:
	print "\nYou must enter a word that contains only letters"

	

# EditLine - by Kvc
## Description
This program allows to Edit & Insert a text on a line in a text file... without
replacing the entire content.
This is an improved & Combined version of ReplaceLine & StrSurr utilities 
both of them were created by Kvc as well.

I needed a tool, when I was working on a Fiverr project, and I couldn't find a
simple solution. So, I created my own solution. I hope this will help you in 
your project too.

Author: Kvc

## Usage
Call EditLine [File] [LineNumber] [Marker 1] [Marker 2] [Text]

Where:

- `ver`		: 	Displays version of program
- `/?`		: 	Displays help for the program
- `File`	: 	Name of the Text File
- `LineNumber`  : 	Line to Edit/Trim/Modify
- `Marker 1`  : 	Text From where, to start the edit
- `Marker 2`  : 	Text From where, to end the edit
- `Text`  : 	Text to be inserted



Example: 
`call EditLine designmap2.xml 2 "product=" ")" "6.0(31)"`



The above command will edit the 2nd line from the designmap2.xml file, and
replace the text between the markers with the text "6.0(31)".
You can use this utility to edit a line in a file, and also to insert a line.

Input: `"<?aid style="50" featureSet="257" product="16.3(24)" ?>"`
Output: `"<?aid style="50" featureSet="257" product="6.0(31)" ?>"`

www.batch-man.com

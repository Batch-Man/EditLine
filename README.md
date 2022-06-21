
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

<!-- wp:heading {"level":3} -->
<h3>Example: To Insert a Line</h3>
<!-- /wp:heading -->

<!-- wp:paragraph -->
<p>In this example, we will be inserting a line in the file named example.txt. The content of the files is shown in the picture below.</p>
<!-- /wp:paragraph -->

<!-- wp:image {"align":"center","id":3698,"width":652,"height":134,"sizeSlug":"full","linkDestination":"none"} -->
<div class="wp-block-image"><figure class="aligncenter size-full is-resized"><img src="https://batch-man.com/wp-content/uploads/2022/05/image-17.png" alt="" class="wp-image-3698" width="652" height="134"/><figcaption>The file to be edited</figcaption></figure></div>
<!-- /wp:image -->

<!-- wp:code -->
<pre class="wp-block-code"><code>editline example.txt 1 "editline" "." "A plugin created by KVC"</code></pre>
<!-- /wp:code -->

<!-- wp:paragraph -->
<p>The above code will insert the line "A plugin created by KVC" between marker1("editline") and marker2(".") in the manner shown below.</p>
<!-- /wp:paragraph -->

<!-- wp:image {"align":"center","id":3699,"width":798,"height":182,"sizeSlug":"large","linkDestination":"none"} -->
<div class="wp-block-image"><figure class="aligncenter size-large is-resized"><img src="https://batch-man.com/wp-content/uploads/2022/05/image-18-1024x234.png" alt="" class="wp-image-3699" width="798" height="182"/>
<!-- /wp:image -->

**Article link**
https://batch-man.com/edit-files-without-opening/
  
**Video link**
https://youtu.be/yrveV-wz7cU
  

-> Download all the images(in png or jpg format only) to be masked and save it in the folder containing the code.

-> How to install MaskTheFace:
Step 1) Go to folder where the code is installed via a python supported terminal.

Step 2) Downloading necessary libraries listed in requirements.txt
		pip install -r requirements.txt

Step 3) Run the code on a image saved in the same folder.
	Generic version:
		python mask_the_face.py --path <path> --mask_type <type-of-mask> --verbose --write_original_image
	
	Here,
		<path> : Path to the image file or a folder containing images to be masked
		<type-of-mask> : Select the mask to be applied. Available options are 'N95', 'surgical_blue', 'surgical_green', 'cloth', 'empty' and 'inpaint'.
		verbose : if set True, will be used to display useful messages during execution.
		write_original_image : If used, the original unmasked image will also be saved in the masked image folder along with processed masked image.

Step 4) All the masked images will be stored in a separate folder name ending in "_masked".
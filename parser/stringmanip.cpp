
#include <string>
#include <string.h>

using namespace std;

namespace KP{


/**
	 * Calculate the exact amount of memory needed to allocate a that consists of the old string with all tags replaced by tag_replacements.
	 * Don't forget the terminating null!
	 *
	 * ex. src="a large ship"
	 *     tag="large"
	 *     tag_replacement="really large"
	 *
	 *     then
	 *     len_src = 14
	 *     numbTagsToReplace=1
	 *     len_tag=5
	 *     len_tag_replacement=12
	 *
	 *     the function should return 22
	 *
	 * \param len_src - length of original string
	 * \param numbTagsToReplace - number of tags to replace in the original string
	 * \param len_tag - length of the tag
	 * \param len_tag_replacement - length of the tag replacement
	 * \return
	 */int amountOfMemoryToAllocateForNewString(int len_src, int numbTagsToReplace, int len_tag, int len_tag_replacement){
		 return (len_src-len_tag+numbTagsToReplace+len_tag_replacement);
	 }

	/**
	 * If src,new_src, tag or tag_replacment are null then returns INVALID_NULL_PTR_DETECTED
	 *
	 * Copies src char string to new_src char string, replaces all tag occurrences with tag_replacement.
	 * Please ensure that new_src is allocated and of proper size before calling this function
	 *
	 * ex.
	 * 	src ="a large bucket on a large ship"
		tag="large"
		tag_replacement="really large"
		then when the function returns
		new_src="a really large bucket on a really large ship"
	 *
	 * \param src  initial char string, may be deleted and reallocated by this function
	 * \param new_src char string with enough space to hold src string with all tag occurrences replaced by tag_replacement
	 * \param tag  the tag to search for
	 * \param tag_replacement  replaces all occurrences of tag
	 * \return INVALID_NULL_PTR_DETECTED one or more of src, tag or tag_replacement is NULL
	 * 		   SUCCESS everything went well, src contains the
	 */
	int replace(const char *src, char *new_src, const char *tag, const char *tag_replacement){

		if (src == nullptr|| new_src == nullptr || tag ==nullptr || tag_replacement == nullptr){
			return -2;
		}
		int srcLen = strlen(src);
		int tagLen = strlen(tag);

		for (int i = 0; i < srcLen; i++) {
			if (*(src + i) == tag[0]) {
				if (strncmp((src + i), tag, tagLen) == 0){
						strcpy(new_src,tag);
				}
			}
		}
		return 0;
	}

	/**
	 * how often does the string in tag occur in src?
	 *
	 * \param src  initial char string
	 * \param tag  the tag to search for
	 * \return INVALID_NULL_PTR_DETECTED one or more of src, or tag is NULL
	 *         otherwise the number of times tag occurs in src
	 */
	int findNumbOccurrences(const char *src,  const char *tag){
		if (src == nullptr|| tag == nullptr){
					return -2;
				}

		int count = 0;
		int srcLen = strlen(src);
		int tagLen = strlen(tag);


		for (int i = 0; i < srcLen; i++) {


				if (*(src + i) == tag[0]) {
					if (strncmp((src + i), tag, tagLen) == 0){
						count++;
					}
				}
	}
		return count;
	}
}

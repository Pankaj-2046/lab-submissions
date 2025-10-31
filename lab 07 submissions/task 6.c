#include <stdio.h>
#include <stdlib.h>

int main( ) {
	int posts[10] = {3, 9, 7, 4, 8, 10, 5, 2, 6, 1};
	int i, j, total_post = 0;
	int max_posts = 0;
	int max_days = 0;
	float avg_posts = 0;
	int streakfound = 0;
	for( i = 0 ; i < 10 ; i++) {
		printf("There were %d on day %d \n", posts[i], i + 1);
		total_post += posts[i];
		if (posts[i] > max_posts) {
			max_posts = posts[i];
			max_days = i + 1;
		}
	}
	
	avg_posts = total_post / 10.00;
	
	for ( i = 0 ; i < 8 ; i++) {
		int increasing = 1;
		for(j = i; j < i + 2; j++) {
		if(posts[j + 1] <= posts[j]) {
			increasing = 0;
			break;
		}
	} if (increasing) {
		streakfound = 1;
		break;
	}
	}
	
	printf("highest activity : %d posts on day %d \n", max_posts, max_days);
	printf("average daily activity : %.1f posts \n", avg_posts);
	
	if(streakfound) {
		printf("3-day increasing streak detected \n");
	} else {
		printf("3-days increasing streak not detected \n");
	}
	
	return 0;
}

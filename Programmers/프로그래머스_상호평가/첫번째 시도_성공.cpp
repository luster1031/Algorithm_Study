string answer = "";
	vector<float> avg(scores[0].size());
	int max_num = 0, min_num = 101;
	float sum = 0;
	bool check_max = true, check_min = true;
	for (int i = 0; i < scores[0].size(); i++) {
		for (int j = 0; j < scores.size(); j++) {
			if ((scores[j][i] == scores[i][i]) &&scores[j][i] == max_num)
				check_max = false;
			else if((scores[j][i] == scores[i][i]) && scores[j][i] == min_num)
				check_min = false;
			max_num = max(scores[j][i], max_num);
			min_num = min(scores[j][i], min_num);
			sum += scores[j][i];
		}

		if ((check_max && check_min) && (scores[i][i] == max_num || scores[i][i] == min_num)) {
			avg[i] = (float)((sum - scores[i][i]) / (scores[i].size() - 1));
		}
		else {
			avg[i] = (float)(sum / scores[i].size());
		}
		max_num = 0;
		min_num = 101;
		sum = 0;
		check_max = true;
		check_min = true;
	}
	for (int i = 0; i < avg.size(); i++) {
		if (avg[i] >= 90)
			answer.push_back('A');
		else if (avg[i] >= 80)
			answer.push_back('B');
		else if(avg[i]>= 70)
			answer.push_back('C');
		else if(avg[i]>= 50)
			answer.push_back('D');
		else
			answer.push_back('F');
	}
	return answer;

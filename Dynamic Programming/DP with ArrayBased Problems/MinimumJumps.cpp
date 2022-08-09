// https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118824/offering/1381988

int minimumJumps(vector<int> &arr, int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (arr[0] == 0)
    {

        return -1;
    }

    int jumpsTaken = 1;
    int maxReach = arr[0];
    int stepsLeft = arr[0];

    for (int i = 1; i <= (n - 2); i++)
    {
        maxReach = max(maxReach, i + arr[i]);

        stepsLeft--;
        if (stepsLeft == 0)
        {
            jumpsTaken++;
            if (i >= maxReach)
            {
                return -1;
            }
            stepsLeft = maxReach - i;
        }
    }
    return jumpsTaken;
}

while(r>l+1){
                lli mid = (l+r)/2;
                if(nums[mid] <= x){l=mid;}
                else{r=mid;}
            }
            cout<<l+1<<ENDL;
# Shell command cheatsheet - gangmuk


**CURRENT TIME**
```shell
CURRENT_TIME=`date +"%Y%m%d_%H%M%S"`
echo "${CURRENT_TIME}"
```


**CHECK IF THE DIRECTORY EXISTS**
```shell
if [ ! -d "output" ]; then
    mkdir output
fi
```


### IF ELSE
```shell
num=0
str="abc"
if [ ${num} -eq 0 ]
then
    echo "num is 1."
elif [ ${num} -eq 1 ]
then
    echo "num is 1."
else
    echo "invalid num: ${num}."
    exit
fi
```


### FOR LOOP
**using list**
```shell
app_list=( "one_service" "three_depth" )
lb_list=( "RoundRobin" "Random" "LeastRequest" "MovingAvg" "EWMA" )
multi_cluster_list=( 0 1)


cur_time=`date +"%Y%m%d_%T"`

DIR="log/${cur_time}"
for app in "${app_list[@]}"
do :
    for lb in "${lb_list[@]}"
    do :
        for multicluster in "${multi_cluster_list[@]}"
        do :
            echo "Start Run $app, $lb, multi_clsuter_$multicluster"
            if [ -d "$DIR" ]; then
                echo "$DIR exists."
            else
                mkdir log/${cur_time}
                echo "mkdir log/${cur_time}"
            fi
            ./run_one_service.sh ${app} ${lb} ${multicluster} &> ${DIR}/${app}_${lb}_multi_${multicluster}.output.log
            echo "Finish"
            echo ""
        done
    done
done
```

### Increment the int var
```shell
idx=0
let "idx = $idx + 1"
```
or
```shell
idx=0
let idx++
```

### While loop

```shell
CURRENT_TIME=`date +"%Y%m%d_%H%M%S"`
fn=${CURRENT_TIME}_describe_all.log
echo fn: $fn

idx=0
while [ 0 -le 1 ] # infinite loop
do
    start_time=$(date +%s.%3N)
    echo "========== DELIMETER: $idx ==========" >> $fn
    #kubectl describe all --all-namespaces | tr -s '[:blank:]' ',' >> ${CURRENT_TIME}_describe_all.log.csv
    kubectl describe all --all-namespaces >> $fn
    end_time=$(date +%s.%3N)
    elapsed=$(echo "scale=3; $end_time - $start_time" | bc)
    #let "idx = $idx + 1"
    let idx++
    sleep_time=$(echo "scale=3; 1.000 - $elapsed" | bc)
    echo "$idx second passed. (press ctrl-c if you want to stop) sleep_time: $sleep_time"
    sleep $sleep_time
done
```

### Checking if the variable is initialized.
```shell
output_file=$1
if [ -z "${output_file}" ]
then
    echo "output_file argument is missing."
    exit
fi
```


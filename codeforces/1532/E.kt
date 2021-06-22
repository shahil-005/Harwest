import java.lang.Integer.max
import java.lang.Integer.min
import java.util.*
import kotlin.collections.ArrayList
import kotlin.collections.HashMap
import kotlin.math.abs

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
private fun readArr() = readLine()!!.split(' ').map(String::toInt)
private fun readArr2() = readLine()!!.split(' ').map(String::toLong)
//Fast IO: https://github.com/finalchild/kotlin-fast-io/blob/master/src/solution.kt#L97

fun main(){
    var t=1
    while(t-- > 0){
        var n=readInt()
        var a=readArr2()
        var m=HashMap<Long,Long>()
        var sum=100000000000
        sum=0
        for(i in 1..n){
            if(m.containsKey(a[i-1])){
                m.put(a[i-1],m.getValue(a[i-1])+1)
            }
            else{
                m.put(a[i-1],1)
            }
            sum+=a[i-1]
        }
        var v=ArrayList<Int>()
        var z=100000000000
        var two=100000000000
        z=0
        two=2
        for(i in 1..n){
            var x=10000000000
            x=sum-a[i-1]
            var y=x/2
            if(x%two==z){
                if(m.containsKey(y)){
                    if(y==a[i-1]){
                        var temp=m.getValue(y)
                        if(temp >= 2){
                            v.add(i)
                        }
                    }
                    else{
                        v.add(i)
                    }
                }
            }
        }
        println(v.size)
        for(it in v){
            print("$it ")
        }
    }

}
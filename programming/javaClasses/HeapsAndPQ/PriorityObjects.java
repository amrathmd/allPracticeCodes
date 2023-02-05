import java.util.PriorityQueue;

public class PriorityObjects {
  static class Student implements Comparable<Student>{
    int rank;
    int percentage;
    Student(int rank, int percentage){
      this.rank=rank;
      this.percentage=percentage;
    }
    @Override
    public int compareTo(Student s2){
      if(this.rank==s2.rank){
        return this.percentage-s2.percentage;
      }
      else{
        return this.rank-s2.rank;
      }
    }
  }
  public static void main(String args[]){
    Student s1=new Student(1,90);
    Student s2=new Student(2,99);
    Student s3=new Student (2,100);
    PriorityQueue<Student> pq=new PriorityQueue<Student>();
    pq.add(s1);
    pq.add(s2);
    pq.add(s3);
    while(!pq.isEmpty()){
      System.out.println(pq.peek().rank + " "+pq.peek().percentage );
      pq.remove();
    }

  }
}

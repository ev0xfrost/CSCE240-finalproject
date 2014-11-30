import java.util.Scanner;
public class OneRecord
{
/*********************************************************************
 * Instance variables.
**/
  Long element;

/*********************************************************************
 * Constructor.
**/
  public OneRecord()
  {
    this.setElement(Long.MIN_VALUE);
  }

/*********************************************************************
 * Accessors.
**/
/*********************************************************************
 * Method to get the value of the 'element'.
 *
 * @return element the 'element' for this 'OneRecord'. 
**/
  public long getElement()
  {
    return this.element;
  }

/*********************************************************************
 * Mutators.
**/
/*********************************************************************
 * Method to set the value of the 'element'.
 *
 * @param value the value to be set.
**/
  public void setElement(long value)
  {
    this.element = value;
  }

/*********************************************************************
 * General methods.
**/
/*********************************************************************
 * Method to read from the input file and set the element.
 *
 * @param inFile the 'Scanner' input file from which to read.
**/
  public void readElement(Scanner inFile)
  {
    long inValue;
    inValue = inFile.nextInt();
    this.setElement(inValue);
  }

/*********************************************************************
 * Method to compare the element against another value.
 *
 * @param secondElt the other value to compare against.
**/
  public long compare(long secondElt)
  {
    long returnValue;

    returnValue = 0;
    if(this.getElement() < secondElt)
      returnValue = -1;
    else if(this.getElement() > secondElt)
      returnValue = 1;

    return returnValue;
  }

/*********************************************************************
 * Method to return a 'String' of the 'element'. 
 *
 * @return the 'String'.
**/
  public String toString()
  {
    String s = String.format("%8d",this.getElement());

    return s;
  }

} // public class OneRecord

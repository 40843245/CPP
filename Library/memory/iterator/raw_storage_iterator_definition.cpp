template <class OutputIterator, class T>
  class raw_storage_iterator :
    public iterator<output_iterator_tag,void,void,void,void>
{
protected:
  OutputIterator iter_;

public:
  explicit raw_storage_iterator (OutputIterator x) : iter_(x) {}
  raw_storage_iterator<OutputIterator,T>& operator* ()
    { return *this; }
  raw_storage_iterator<OutputIterator,T>& operator= (const T& element)
    { new (static_cast<void*>(&*iter_)) T (element); return *this; }
  raw_storage_iterator<OutputIterator,T>& operator++ ()
    { ++iter_; return *this; }
  raw_storage_iterator<OutputIterator,T> operator++ (int)
    { raw_storage_iterator<OutputIterator,T> tmp = *this; ++iter_; return tmp; }
};

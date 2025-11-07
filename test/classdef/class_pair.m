classdef class_pair
  properties
    first
    second
  end
  methods
    function this = class_pair (first, varargin)
      if isa (first, 'class_pair_elem')
        this.first = first.value;
        this.second = 0;
      else
        this.first = first;
        this.second = varargin{1};
      end
    end
    function pe = class_pair_elem (this)
      pe = class_pair_elem (this.first);
    end
  end
end

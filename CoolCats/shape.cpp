class Shape:public QPainter
 {
    private:
        int id;
        bool isRender;
        //float penwidth;
        //ShapeType type;
        //Color penColor;
        //Color brushColor
        //PenStyle style;
    public:
        Shape(int idIn, bool isRender, int penColorEdit, int penWidthEdit, int penCapEdit,
                int PenJoinEdit, int brushColorEdit, int penStyleEdit)
        {
            setBrush()
        }

        virtual ~Shape()=0;
        virtual void draw()=0;
        virtual bool is_Left_Clicked(Qpoint &e);

 };
 #endif //Shape_H                          

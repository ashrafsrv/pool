#ifndef POCKET_H
#define POCKET_H
#include <QPoint>

class Pocket
{
public:
    Pocket(QPoint pos, float radius=15.0):
    m_pos(pos), m_radius(radius){}

    ~Pocket(){}

    QPoint point(){
        return m_pos;
    }

    float get_radius(){
        return m_radius;
    }

    void render(QPainter &painter){
        painter.setPen(Qt::black);
        painter.setBrush(QBrush(Qt::black));
        painter.drawEllipse(m_pos.x() - m_radius,
                            m_pos.y() - m_radius,
                            m_radius*2,
                            m_radius*2);
    }

private:
    QPoint m_pos;
    float m_radius;
};

#endif // POCKET_H

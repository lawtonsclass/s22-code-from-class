#lang racket

(displayln 
  (((lambda (x) (lambda (y) (+ x y))) 4) 2))
  
(define TRUE (lambda (x) (lambda (y) x)))
(define FALSE (lambda (x) (lambda (y) y)))

(define OR (lambda (p) (lambda (q) ((p p) q))))

(displayln ((OR TRUE) FALSE))

(define PAIR (lambda (x) (lambda (y) (lambda (f) ((f x) y)))))
(define FIRST (lambda (p) (p TRUE)))
(define SECOND (lambda (p) (p FALSE)))

(define p23 ((PAIR 2) 3))
(displayln (FIRST p23))
(displayln (SECOND p23))

(define Y
  (lambda (f)
    ((lambda (x) (f (lambda (v) ((x x) v))))
     (lambda (x) (f (lambda (v) ((x x) v)))))))

(define G (lambda (r) (lambda (n)
                        (if (= n 0)
                          1
                          (* n (r (- n 1))))
                        )))
(displayln ((Y G) 3))

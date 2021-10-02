import 'package:flutter/material.dart';
import 'package:quiz_app/result.dart';
import 'quiz.dart';
import 'result.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    // TODO: implement createState
    return _MyAppState();
  }
}

class _MyAppState extends State<MyApp> {
  final _questions = const [
    {
      'questionText': 'What\'s your favourite color?',
      'answers': [
        {'text': 'Black', 'score': 10},
        {'text': 'Red', 'score': 8},
        {'text': 'green', 'score': 2},
        {'text': 'white', 'score': 5}
      ]
    },
    {
      'questionText': 'What\'s your favourite animal?',
      'answers': [
        {'text': 'Lion', 'score': 10},
        {'text': 'Elephant', 'score': 8},
        {'text': 'Snake', 'score': 2},
        {'text': 'Cat', 'score': 5}
      ]
    },
    {
      'questionText': 'What\'s your favourite car?',
      'answers': [
        {'text': 'Dodge', 'score': 10},
        {'text': 'Mustang', 'score': 8},
        {'text': 'Honda', 'score': 2},
        {'text': 'Bugatti', 'score': 5}
      ]
    },
  ];
  var _questionIndex = 0;
  var _totalScore = 0;

  void _resetQuiz(){
    setState((){
    _questionIndex = 0;
    _totalScore = 0;
    });
  }

  void _answerQuestion(int score) {
    //var aBool = true;
    //aBool = false;

    _totalScore += score;

    setState(() {
      _questionIndex = _questionIndex + 1;
    });
    print(_questionIndex);
    if (_questionIndex < _questions.length) {
      print('We have more questions! ');
    } else {
      print('No more questions! ');
    }
  }

  @override
  Widget build(BuildContext context) {
    //var dummy = const ['Hello'];
    //dummy.add('Max');
    //print(dummy);
    //dummy = [];
    //questions = []; this does not work if questions is a const.

    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          backgroundColor: Colors.red,
          title: Text('Quiz app'),
        ),
        body: _questionIndex < _questions.length
            ? Quiz(
                answerQuestion: _answerQuestion,
                questionIndex: _questionIndex,
                questions: _questions,
              )
            : Result(_totalScore, _resetQuiz),
      ),
    );
  }
}

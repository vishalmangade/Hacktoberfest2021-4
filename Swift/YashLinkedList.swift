//
//  YashLinkedList.swift
//  LinkedList
//
//  Created by Yash on 03/10/2021.
//

import Foundation

class Node<T> {
	var value: T
	var next: Node?
	
	init(value: T, next: Node<T>? = nil) {
		self.value = value
		self.next = next
	}
}

extension Node: CustomStringConvertible {
	var description: String {
		if let next = next {
			return "\(value) -> " + String(describing: next) + " "
		}
		return "\(value)"
	}
}

struct LinkedList<T> {
	var head: Node<T>?
	var tail: Node<T>?
	
	var isEmpty: Bool { head == nil }
	var count: Int {
		var node = head
		var length = 0
		
		while node != nil {
			length += 1
			node = node?.next
		}
		
		return length
	}
	var allValues: [T]? {
		guard !isEmpty else { return nil }
		var values = [T]()
		var node = head
		
		while node != nil {
			values.append(node!.value)
			node = node?.next
		}
		return values
	}
	
	init() {}
	
	func node(at index: Int) -> Node<T>? {
		var node = head
		var i = 0
		while node != nil && i < index {
			node = node!.next
			i += 1
		}
		return node
	}
	
	mutating func push(_ value: T) {
		head = Node(value: value, next: head)
		if tail == nil { tail = head }
	}
	
	mutating func append(_ value: T) {
		guard !isEmpty else { push(value); return }
		tail!.next = Node(value: value)
		tail = tail!.next
	}
	
	@discardableResult
	mutating func insert(_ value: T, after node: Node<T>) -> Node<T> {
		guard tail !== node else { append(value); return tail! }
		node.next = Node(value: value, next: node.next)
		return node.next!
	}
	
	@discardableResult
	mutating func pop() -> T? {
		defer {
			head = head?.next
			if isEmpty { tail = nil }
		}
		return head?.value
	}
	
	@discardableResult
	mutating func removeLast() -> T? {
		guard let head = head else { return nil }
		guard head.next != nil else { return pop() }
		
		var prev = head
		var curr = head
		
		while let next = curr.next {
			prev = curr
			curr = next
		}
		
		prev.next = nil
		tail = prev
		return curr.value
	}

	
	@discardableResult
	mutating func remove(after node: Node<T>) -> T? {
		defer {
			if node.next === tail { tail = node }
			node.next = node.next?.next
		}
		return node.next?.value
	}
	
	mutating func removeAll() {
		head = nil
		tail = nil
	}
	
}

extension LinkedList: CustomStringConvertible {
	var description: String {
		if let head = head {
			return String(describing: head)
		}
		return "Empty list"
	}
}
